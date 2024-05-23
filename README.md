# 📄 Programação I em execução
Um programa em C para gerenciar informações de aeronaves, permitindo inserção, atualização e visualização de dados através de um menu interativo, com validações de entrada e uso de funções do sistema.

## :link: Ambiente
Visual Studio Code
```
1.89.1
```

## :link: Objetivo e descrição
O programa desenvolvido em linguagem C é um sistema destinado ao cadastro e gerenciamento de informações sobre aeronaves. Ele permite que o usuário insira, atualize e visualize dados de diferentes modelos de aviões. O sistema utiliza uma estrutura chamada `Aviao` para armazenar informações sobre cada aeronave. Essa estrutura contém campos para armazenar o nome do modelo do avião, o número de assentos, os tipos de motores, o tipo de corredor, o alcance em quilômetros e o número de destinos operados por esse modelo.

Para garantir a funcionalidade do sistema, várias funções foram implementadas. A função `tamanho_string` calcula o tamanho de uma string, enquanto a função `stringparaint` converte uma string que representa um número para um valor inteiro. A função `menucaract` é responsável por coletar informações detalhadas sobre um avião, com validação de entrada para assegurar que os campos não fiquem vazios. A função `informacao` itera sobre uma lista de aviões e chama `menucaract` para coletar informações de cada avião. A função `tabela` exibe uma tabela com todos os dados cadastrados dos aviões.

Além disso, a função `editar_aviao` permite atualizar informações específicas de um avião selecionado, e a função `atualizardados` exibe uma tabela dos dados e permite a seleção de um avião para atualizar suas informações. A função `total` exibe o número total de aviões cadastrados, enquanto a função `menu_buscarchave` permite buscar e visualizar informações dos aviões por palavras-chave, como o modelo. Por fim, a função `numeroavioes` solicita o número total de aviões a serem cadastrados e valida a entrada. 

A função principal `main` implementa um menu interativo que permite ao usuário acessar as diferentes funcionalidades do programa. O menu apresenta opções para inserir informações, exibir a tabela dos dados informados, gerar relatórios por palavras-chave, atualizar dados, mostrar a quantidade de dados e sair do programa. 

O programa inclui validações para garantir que os dados inseridos pelo usuário sejam válidos. Essas validações verificam se os campos não estão vazios e asseguram que as entradas numéricas sejam válidas e positivas. Além disso, para melhorar a experiência do usuário, o programa utiliza funções do sistema, como `system("cls")` para limpar a tela e `system("PAUSE")` para pausar a execução, permitindo uma navegação mais limpa e organizada.

Em resumo, este programa é uma ferramenta robusta para o gerenciamento de informações de aeronaves, permitindo que usuários insiram, visualizem, atualizem e busquem dados de forma eficiente. Ele serve como um exemplo prático de como utilizar estruturas de dados e técnicas de validação de entrada em C para construir um sistema interativo e funcional.
