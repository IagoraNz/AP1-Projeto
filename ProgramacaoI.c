#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define tamanho 100
#define maximo 100

typedef struct aviao {
    char nomeaviao[tamanho];
    char assentos[tamanho];
    char motores[tamanho];
    char corredor[tamanho];
    char alcance[tamanho];
    char destinos[tamanho];
} Aviao;

int tamanho_string(char str[]) {
    int i, tamStr = 0;
    for (i = 0; str[i] != '\0'; i++) {
        tamStr++;
    }
    return tamStr;
}

int stringparaint(const char str[]) {
    int result = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            result = result * 10 + (str[i] - '0');
        } 
        else{
            return -1;
        }
    }
    return result;
}

void menucaract(int i, Aviao lista[]) {

    int invalido;

    printf("\nNovo aviao: \n");

    do{
        printf("\nDigite o modelo do aviao: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].nomeaviao);

        invalido = (tamanho_string(lista[i].nomeaviao) <= 1);

        if(invalido){
            printf("Modelo do aviao nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    do{
        printf("Qual o numero de assentos desse modelo?: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].assentos);

        invalido = (tamanho_string(lista[i].assentos) <= 1);

        if (invalido) {
            printf("Numero de assentos nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    do{
        printf("Qual os tipos de motores?: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].motores);

        invalido = (tamanho_string(lista[i].motores) <= 1);

        if (invalido) {
            printf("Tipos de motores nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    do{
        printf("Digite o tipo de corredor: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].corredor);

        invalido = (tamanho_string(lista[i].corredor) <= 1);

        if (invalido) {
            printf("Tipo de corredor nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    do{
        printf("Alcance em km do aviao: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].alcance);

        invalido = (tamanho_string(lista[i].alcance) <= 1);

        if (invalido) {
            printf("Alcance do aviao nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    do{
        printf("Numero de destinos operados por esse modelo: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].destinos);

        invalido = (tamanho_string(lista[i].destinos) <= 0);

        if (invalido){
            printf("Numero de destinos nao pode ser vazio! Por favor, insira novamente.\n");
        }
    }while(invalido);

    printf("\nCadastrado com sucesso!\n\n");
}

void informacao(int naviao, Aviao lista[]) {
    int i;
    for (i = 0; i < naviao; i++) {
        menucaract(i, lista);
    }
}

void tabela(int naviao, Aviao lista[]) {
    printf("\n------- TABELA DOS DADOS INFORMADOS -------\n");
    printf("AVIAO\tMODELO\t\t\tASSENTOS\tMOTORES\t\tCORREDOR\tALCANCE\t\tDESTINOS\n");
    for (int i = 0; i < naviao; i++) {
        printf("%d\t%-20.20s\t%-8s\t%-15.15s\t%-15.15s\t%-8s\t%-8s\n", i + 1, lista[i].nomeaviao, lista[i].assentos, lista[i].motores, lista[i].corredor, lista[i].alcance, lista[i].destinos);
    }
}

void editar_aviao(int i, Aviao lista[])
{
    int opc;
    printf("\n----- ATUALIZAR DADOS -----\n");
    printf("\n1 - Modelo");
    printf("\n2 - Assentos");
    printf("\n3 - Motores");
    printf("\n4 - Corredor");
    printf("\n5 - Alcande");
    printf("\n6 - Destinos");
    printf("\n7 - Sair");
    printf("\nSelecione a coluna que deseja atualizar: ");
    fflush(stdin);
    scanf("%d",&opc);

    printf("Aviao %d: ", i + 1);

    switch (opc)
    {
    case 1:
        printf("\nDigite o modelo do aviao: ");
        fflush(stdin);
        scanf("%[^\n]",lista[i].nomeaviao); 
        break;
        
    case 2:
        printf("\nQual o numero de assentos desse modelo?: ");
        fflush(stdin);
        scanf("%[^\n]",lista[i].assentos); 
        break;

    case 3:
        printf("\nQual os tipos de motores?: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].motores);
        break;
    
    case 4:
        printf("\nDigite o tipo de corredor: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].corredor);
        break;

    case 5:
        printf("\nAlcance em km do aviao: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].alcance);
        break;
        
    case 6:
        printf("\nNumero de destinos operados por esse modelo: ");
        fflush(stdin);
        scanf("%[^\n]", lista[i].destinos);
        break;

    case 7:
        printf("\nSaindo da atualizacao...\n");
        break;
    
    default:
        printf("\n");
        printf("Opcao invalida!\n");
        printf("\n");
        break;
    }

    printf("\nEfetuado! Caso nao seja inserida nenhuma informacao, as caracteristicas permanecem inalteradas\n");
}

void atualizardados(int naviao, Aviao lista[]) {
    tabela(naviao, lista);
    int i;
    printf("\nQual o numero do aviao que deseja atualizar?: ");
    fflush(stdin);
    scanf("%d", &i);

    if (i != 0 && i <= naviao) {
        i -= 1;
        editar_aviao(i, lista);
    } else {
        printf("Opcao invalida!");
    }
}

void total(int informacoesCadastradas) {
    printf("Foram inseridos %d avioes\n", informacoesCadastradas);
}

void menu_buscarchave(int naviao, Aviao lista[]) {
    char palavraChave[tamanho];
    int opc;

    printf("\nDigite o modelo do aviao para busca: ");
    fflush(stdin);
    scanf("%[^\n]", palavraChave);

    system("cls");

    int modeloEncontrado = 0;
    for (int i = 0; i < naviao; i++) {
        if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
            modeloEncontrado = 1;
            break;
        }
    }

    if (!modeloEncontrado) {
        printf("Aviao nao encontrado: %s\n", palavraChave);
        return;
    }

    do {
        printf("Selecione a coluna para pesquisar:\n");
        printf("1 - Motores\n");
        printf("2 - Corredor\n");
        printf("3 - Assentos\n");
        printf("4 - Alcance\n");
        printf("5 - Destinos\n");
        printf("6 - Dados completos\n");
        printf("7 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opc);

        system("cls");

        switch (opc) {
            case 1:
                printf("\nMODELO\t\t\tMOTORES\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%-20.20s\t%-15.15s\n", lista[i].nomeaviao, lista[i].motores);
                        break;
                    }
                }
                break;

            case 2:
                printf("\nMODELO\t\t\tCORREDOR\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%-20.20s\t%-15.15s\n", lista[i].nomeaviao, lista[i].corredor);
                        break;
                    }
                }
                break;

            case 3:
                printf("\nMODELO\t\t\tASSENTOS\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].assentos);
                        break;
                    }
                }
                break;

            case 4:
                printf("\nMODELO\t\t\tALCANCE\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].alcance);
                        break;
                    }
                }
                break;

            case 5:
                printf("\nMODELO\t\t\tDESTINOS\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].destinos);
                        break;
                    }
                }
                break;

            case 6:
                printf("\nAVIAO\tMODELO\t\t\tASSENTOS\tMOTORES\t\tCORREDOR\tALCANCE\t\tDESTINOS\n");
                for (int i = 0; i < naviao; i++) {
                    if (strcmp(lista[i].nomeaviao, palavraChave) == 0) {
                        printf("%d\t%-20.20s\t%-8s\t%-15.15s\t%-15.15s\t%-8s\t%-8s\n", i + 1, lista[i].nomeaviao, lista[i].assentos, lista[i].motores, lista[i].corredor, lista[i].alcance, lista[i].destinos);
                        break;
                    }
                }
                break;

            case 7:
                printf("Saindo da aplicacao...\n");
                break;

            default:
                printf("Opcao Invalida\n");
                break;
        }
    } while (opc != 7);
}

int numeroavioes() {
    char input[tamanho];
    int numAvioes;

    do{
        printf("Digite o numero total de avioes que serao cadastrados: ");
        scanf("%s", input);

        numAvioes = stringparaint(input);

        if (numAvioes == -1){
            printf("Numero invalido. Insira um valor numerico valido.\n");
        } 
        else if(numAvioes <= 0){
            printf("Numero invalido. Insira um valor positivo maior que zero.\n");
        }
    }while(numAvioes <= 0);

    return numAvioes;
}

int main() {
    int naviao;
    struct aviao lista[maximo];
    int escolha;

    naviao = numeroavioes();

    system("cls");

    if(naviao > 0){
        int informacoesCadastradas = 0;
        do {
            printf("\n----- SISTEMA DA EMPRESA AEREA -----\n");
            printf("1 - Inserir informacoes\n");
            printf("2 - Tabela dos dados informados\n");
            printf("3 - Gerar relatorios por palavras-chave\n");
            printf("4 - Atualizar dados\n");
            printf("5 - Mostrar a quantidade de dados\n");
            printf("6 - Sair\n");
            printf("Digite a opcao desejada: ");
            scanf("%d", &escolha);
            fflush(stdin);

            switch (escolha) {
                case 1:
                    if(informacoesCadastradas < naviao){
                        informacao(1, lista + informacoesCadastradas);
                        informacoesCadastradas++;
                    } 
                    else{
                        printf("Todos os avioes foram cadastrados.\n");
                    }
                    system("PAUSE");
                    system("cls");
                    break;
                    
                case 2:
                    if(informacoesCadastradas){
                        tabela(naviao, lista);
                    } 
                    else{
                        printf("Nenhum aviao cadastrado. Cadastre informacoes antes de exibir a tabela.\n");
                    }
                    system("PAUSE");
                    system("cls");
                    break;

                case 3:
                    if(informacoesCadastradas){
                        menu_buscarchave(naviao, lista);
                    } 
                    else{
                        printf("Nenhum aviao cadastrado. Cadastre informacoes antes de buscar por palavra-chave\n");
                    }
                    system("PAUSE");
                    system("cls");
                    break;

                case 4:
                    if(informacoesCadastradas){
                        atualizardados(naviao, lista);
                    } 
                    else{
                        printf("Nenhum aviao cadastrado. Cadastre informacoes antes de atualizar os dados.\n");
                    }
                    system("PAUSE");
                    system("cls");
                    break;

                case 5:
                    if(informacoesCadastradas){
                        total(informacoesCadastradas);
                    } 
                    else{
                        printf("Nenhum aviao cadastrado. Cadastre informacoes antes de visualizar o numero de informacoes.\n");    
                    }
                    system("PAUSE");
                    system("cls");
                    break;

                case 6:
                    printf("Saindo...\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
                    system("cls");
                    break;
            }
        } while (escolha != 6);
    } 
    else{
        printf("Nenhum aviao cadastrado.\n");
    }

    return 0;
}