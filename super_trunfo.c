#include <stdio.h>

// Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
//  Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 // População: O número de habitantes da cidade. Tipo: int
 // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 // PIB: O Produto Interno Bruto da cidade. Tipo: float
 // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 // Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50

 
int main() {
    //carta1
    char carta1_estado, carta1_codigo[4], carta1_cidade[50];
    int carta1_populacao, carta1_pontos_turisticos;
    float carta1_area;
    double carta1_pib;

    //carta2
    char carta2_estado, carta2_codigo[4], carta2_cidade[50];
    int carta2_populacao, carta2_pontos_turisticos;
    float carta2_area;
    double carta2_pib;

    printf("Hello, Super Trunfo!\n");
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1_codigo);
    printf("Nome da Cidade: ");
    scanf("%c", carta1_cidade);
    printf("População: ");
    scanf("%d", &carta1_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1_area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta1_pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    //inserir dados carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2_codigo);
    printf("Nome da Cidade: ");
    scanf("%c", carta2_cidade);
    printf("População: ");
    scanf("%d", &carta2_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2_area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta2_pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    printf("Cartas cadastradas com sucesso!\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c",carta1_estado);
    printf("Código: %s",carta1_codigo);
    printf("Nome da Cidade: %s",carta1_cidade);
    printf("População: %d",carta1_populacao);
    printf("Área: %.2f km²",carta1_area);
    printf("PIB: %.2f bilhões de reais",carta1_pib);
    printf("Número de Pontos Turísticos: %d",carta1_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c",carta2_estado);
    printf("Código: %s",carta2_codigo);
    printf("Nome da Cidade: %s",carta2_cidade);
    printf("População: %d",carta2_populacao);
    printf("Área: %.2f km²",carta2_area);
    printf("PIB: %.2f bilhões de reais",carta2_pib);
    printf("Número de Pontos Turísticos: %d",carta2_pontos_turisticos);
    return 0;
}