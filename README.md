# ✈️ AP1-Projeto: Sistema de Gerenciamento de Aeronaves

![Status do Projeto](https://img.shields.io/badge/Status-Concluído-green)
![C](https://img.shields.io/badge/C-Standard-blue)
![License](https://img.shields.io/badge/License-MIT-yellow)

Este repositório contém um sistema desenvolvido em **Linguagem C** para o gerenciamento de informações de aeronaves, permitindo o cadastro, atualização e consulta de dados de diferentes modelos.

## 📄 Sobre o projeto

O objetivo deste projeto é fornecer uma ferramenta robusta para registrar e manipular dados técnicos de aviões, facilitando a organização e o acesso a essas informações através de uma interface de linha de comando interativa.

O sistema utiliza estruturas de dados (`structs`) para armazenar detalhes como modelo, assentos, motores, e outros atributos essenciais.

### 🎯 Objetivos específicos
- Implementar um sistema de cadastro de aeronaves (CRUD).
- Permitir a busca de aeronaves por palavras-chave.
- Gerar relatórios tabulares das aeronaves cadastradas.
- Validar entradas de dados para garantir a integridade das informações.
- Utilizar alocação estática de memória para gerenciar a lista de aviões.

## 📊 Estrutura de Dados

O sistema gerencia registros contendo os seguintes atributos para cada aeronave:

- **Modelo:** Nome do modelo do avião.
- **Assentos:** Capacidade de passageiros.
- **Motores:** Tipos e quantidade de motores.
- **Corredor:** Tipo de corredor (único, duplo, etc.).
- **Alcance:** Alcance máximo em quilômetros.
- **Destinos:** Número de destinos operados pelo modelo.

## 🛠️ Tecnologias utilizadas

O projeto foi desenvolvido em **C** utilizando ferramentas padrão de desenvolvimento. As principais tecnologias são:

- **Linguagem C**: Lógica e implementação do sistema.
- **GCC**: Compilador utilizado para construir o executável.
- **Visual Studio Code**: Ambiente de desenvolvimento integrado (IDE).

## 🚀 Como executar

### Pré-requisitos
Certifique-se de ter um compilador C (como o GCC) instalado em sua máquina.

### Instalação e Execução

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   cd seu-repositorio
   ```

2. Compile o código fonte:
   ```bash
   gcc ProgramacaoI.c -o sistema_aeronaves
   ```

3. Execute o programa:
   - **Windows:**
     ```bash
     sistema_aeronaves.exe
     ```
   - **Linux/Mac:**
     ```bash
     ./sistema_aeronaves
     ```

## 📈 Funcionalidades

O sistema oferece um menu interativo com as seguintes opções:

| Opção | Descrição |
| :--- | :--- |
| **1 - Inserir informações** | Cadastra uma nova aeronave no sistema. |
| **2 - Tabela dos dados** | Exibe todos os aviões cadastrados em formato tabular. |
| **3 - Buscar por palavra-chave** | Pesquisa aviões pelo modelo e exibe detalhes específicos. |
| **4 - Atualizar dados** | Permite editar as informações de uma aeronave existente. |
| **5 - Quantidade de dados** | Mostra o total de aeronaves cadastradas. |
| **6 - Sair** | Encerra a execução do programa. |

> **Nota:** O sistema inclui validações para impedir campos vazios e entradas numéricas inválidas, garantindo a consistência dos dados.

## 📂 Estrutura do repositório

```
📂 AP1-Projeto/
├── 📄 ProgramacaoI.c      # Código fonte principal do sistema
├── 📄 README.md           # Documentação do projeto
└── 📂 .vscode/            # Configurações do editor (opcional)
```

## 📝 Licença

Este projeto está sob a licença MIT. Sinta-se à vontade para usar e modificar.
