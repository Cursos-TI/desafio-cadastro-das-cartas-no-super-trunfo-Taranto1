#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    // Definindo variáveis.

    // Estados
    char Estado_01;
    char Estado_02;

    // Código das cartas
    char cod_carta_01[3];
    char cod_carta_02[3];

    // Cidades
    char cidade_01[30];
    char cidade_02[30];

    // População das cidades
    int populacao_cid_01;
    int populacao_cid_02;

    // Área da cidade
    float area_cid_01;
    float area_cid_02;

    // Produto interno bruto das cidades
    float PIB_cid_01;
    float PIB_cid_02;

    // Número de pontos turísticos
    int ponto_turistico_cid_01;
    int ponto_turistico_cid_02;

    // mensagem de boas vindas
    printf("============================================\n"
        "Bem-vindo ao jogo Super Trunfo Cidades!\n"
        "Prepare-se para desafiar seus conhecimentos!\n"
        "============================================\n");
    
    // aguardando resposta do usuário
    getchar();

    // limpando a tela
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    // mensagem de início
    printf("Para começar, você precisará inserir alguns dados para cadastrar as cartas.\n");
    
    // aguardando resposta do usuário
    getchar();

    // inserindo dados da carta 01
    printf("Dados da primeira carta\n");
    printf("Digite o Estado (representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado_01); // Lê o caracter representando o Estado
    printf("Insira o código da carta A letra do estado seguida de um número de 01 a 04 (ex: A01): \n"); 
    scanf("%s", &cod_carta_01); // Lê a string para o código da carta
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_01); // Lê a string para o nome da cidade
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao_cid_01);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", area_cid_01); // Lê o tamanho da área da cidade
    print("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", PIB_cid_01); // Lê o PIB da cidade
    print("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", ponto_turistico_cid_01); // Lê a quantidade de pontos turísticos da cidade

    // Exibindo os dados da carta 01

    printf("Carta 01\n");
    printf("Estado: %c\n", Estado_01); // Imprime o Estado
    printf("Código: %s\n", cod_carta_01); // Imprime o código da carta
    printf("Nome da Cidade: %s\n", cidade_01); // Imprime o nome da cidade
    printf("População: %d\n", populacao_cid_01); // Imprime a população da cidade
    printf("Área: %.2f", area_cid_01); // Imprime a área da cidade
    printf("PIB: %.2f", PIB_cid_01); // Imprime o PIB da cidade
    printf("Números de Pontos Turísticos: %d\n", ponto_turistico_cid_01); // Imprime o número de pontos turísticos da cidade


    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
