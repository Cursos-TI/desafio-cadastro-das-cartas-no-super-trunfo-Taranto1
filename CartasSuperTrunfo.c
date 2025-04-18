#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    // Definindo variáveis.

    // Estados
    char Estado_01;
    char Estado_02;

    // Código das cartas
    char cod_carta_01[4];
    char cod_carta_02[4];

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
    double PIB_decimal_cid_01;
    float PIB_cid_02;
    double PIB_decimal_cid_02;

    // Número de pontos turísticos
    int ponto_turistico_cid_01;
    int ponto_turistico_cid_02;

    // Densidade populacional
    float densidade_cidade_01;
    float densidade_cidade_02;

    // PIB per capta
    float PIB_per_capita_01;
    float PIB_per_capita_02;

    // mensagem de boas vindas
    printf("============================================\n"
        "Bem-vindo ao jogo Super Trunfo Cidades!\n"
        "Prepare-se para desafiar seus conhecimentos!\n"
        "============================================\n");
    
    // aguardando resposta do usuário
    getchar();

    // "limpando a tela"
    printf("\n\n\n\n\n\n\n\n\n");

    // mensagem de início
    printf("Para começar, você precisará inserir alguns dados para cadastrar as cartas, iniciando pela carta 01.\n");
    
    // aguardando resposta do usuário
    getchar();

    // Leitura dos dados da carta 01
    printf("DADOS DA CARTA 01\n");
    printf("Digite o Estado (representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado_01); // Lê o caracter representando o Estado
    printf("Insira o código da carta A letra do estado seguida de um número de 01 a 04 (ex: A01): \n"); 
    scanf("%s", cod_carta_01); // Lê a string para o código da carta
    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade_01); // Lê a string para o nome da cidade
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao_cid_01);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_cid_01); // Lê o tamanho da área da cidade
    printf("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB_cid_01); // Lê o PIB da cidade
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ponto_turistico_cid_01); // Lê a quantidade de pontos turísticos da cidade

    printf("\n\n\n");

    // Leitura dos dados da carta 02
    printf("DADOS DA CARTA 02\n");
    printf("Digite o Estado (representado por uma letra de 'A' a 'H'): \n");
    scanf(" %c", &Estado_02); 
    printf("Insira o código da carta A letra do estado seguida de um número de 01 a 04 (ex: A01): \n"); 
    scanf("%s", cod_carta_02); 
    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade_02); 
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao_cid_02);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area_cid_02); 
    printf("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB_cid_02); 
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ponto_turistico_cid_02); 

    printf("\n\n\n");

    // Transformando PIB para decimal
    PIB_decimal_cid_01 = PIB_cid_01 * 1e9;
    PIB_decimal_cid_02 = PIB_cid_02 * 1e9;

    // Calculando Densidade e PIB per capta
    densidade_cidade_01 = (float) populacao_cid_01 / area_cid_01;
    densidade_cidade_02 = (float) populacao_cid_02 / area_cid_02;
    PIB_per_capita_01 = (float) PIB_decimal_cid_01 / populacao_cid_01;
    PIB_per_capita_02 = (float) PIB_decimal_cid_02 / populacao_cid_02;

    // Exibindo os dados da carta 01

    printf("Carta 01\n");
    printf("Estado: %c\n", Estado_01); // Imprime o Estado
    printf("Código: %s\n", cod_carta_01); // Imprime o código da carta
    printf("Nome da Cidade: %s\n", cidade_01); // Imprime o nome da cidade
    printf("População: %d\n", populacao_cid_01); // Imprime a população da cidade
    printf("Área: %.2f km²\n", area_cid_01); // Imprime a área da cidade
    printf("PIB: %.2f bilhões de Reais\n", PIB_cid_01); // Imprime o PIB da cidade
    printf("Números de Pontos Turísticos: %d\n", ponto_turistico_cid_01); // Imprime o número de pontos turísticos da cidade
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_cidade_01); // Imprime a densidade populacional da cidade
    printf("PIB per Capita: %.2f\n", PIB_per_capita_01); // Imprime o PIB per capita da cidade

    printf("\n\n");
    // Exibindo os dados da carta 02

    printf("Carta 02\n");
    printf("Estado: %c\n", Estado_02); 
    printf("Código: %s\n", cod_carta_02);
    printf("Nome da Cidade: %s\n", cidade_02); 
    printf("População: %d\n", populacao_cid_02); 
    printf("Área: %.2f km²\n", area_cid_02); 
    printf("PIB: %.2f bilhões de Reais\n", PIB_cid_02); 
    printf("Números de Pontos Turísticos: %d\n", ponto_turistico_cid_02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_cidade_02);
    printf("PIB per Capita: %.2f\n", PIB_per_capita_02);
    
    return 0;
}
