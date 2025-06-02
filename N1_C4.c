#include <stdio.h>
#include <string.h>
#define TAM_CODIGO 4
#define TAM_NOME 50

// N1_C4.c
// Este programa lê os dados de duas cartas de cidades brasileiras e exibe essas informações.
// O programa utiliza uma estrutura para armazenar os dados de cada carta, incluindo estado, código, nome da cidade,
// população, área, PIB e número de pontos turísticos.
// Estrutura para armazenar os dados de uma carta

struct Carta {
    char estado;
    char codigo[TAM_CODIGO];
    char nomeCidade[TAM_NOME];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da Carta 1
    
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Informe o nome da cidade: ");
    getchar(); // consume leftover newline
    fgets(carta1.nomeCidade, TAM_NOME, stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0; // remove trailing newline
    scanf("%s", carta1.nomeCidade);

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da Carta 2

    printf("\nCadastro da Carta 2:\n");
    printf("\nInforme o estado (A-H): \n");
    scanf(" %c", &carta2.estado);

    printf("Informe o nome da cidade: ");
    getchar(); // consume leftover newline
    fgets(carta2.nomeCidade, TAM_NOME, stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0; // remove trailing newline

    printf("\nInforme o nome da cidade: \n");
    scanf(" %s", carta2.nomeCidade);

    printf("\nInforme a população: \n");
    scanf("%d", &carta2.populacao);

    printf("\nInforme a área (em km²): \n");
    scanf("%f", &carta2.area);

    printf("\nInforme o PIB (em bilhões de reais): \n");
    scanf("%f", &carta2.pib);

    printf("\nInforme o número de pontos turísticos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados da Carta 1

    printf("\nCarta 1:\n");
    printf("\nEstado 1: %c\n", carta1.estado);
    printf("\nCódigo: %s\n", carta1.codigo);
    printf("\nNome da Cidade: %s\n", carta1.nomeCidade);
    printf("\nPopulação: %d\n", carta1.populacao);
    printf("\nÁrea: %.2f km²\n", carta1.area);
    printf("\nPIB: %.2f bilhões de reais\n", carta1.pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da Carta 2

    printf("\nCarta 2:\n");
    printf("\nEstado 2: %c\n", carta2.estado);
    printf("\nCódigo: %s\n", carta2.codigo);
    printf("\nNome da Cidade: %s\n", carta2.nomeCidade);
    printf("\nPopulação: %d\n", carta2.populacao);
    printf("\nÁrea: %.2f km²\n", carta2.area);
    printf("\nPIB: %.2f bilhões de reais\n", carta2.pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}