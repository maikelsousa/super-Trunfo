// ...existing code...
#include <stdio.h>
#include <string.h>

int main() {
    // carta1
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_cidade[50];
    int carta1_populacao, carta1_pontos_turisticos;
    float carta1_area;
    double carta1_pib;
    double superpoder_carta1;

    // carta2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    int carta2_populacao, carta2_pontos_turisticos;
    float carta2_area;
    double carta2_pib;
    double superpoder_carta2;

    printf("Hello, Super Trunfo!\n");
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", carta1_codigo);
    getchar(); // consome '\n' deixado pelo scanf
    printf("Nome da Cidade: ");
    fgets(carta1_cidade, sizeof carta1_cidade, stdin);
    carta1_cidade[strcspn(carta1_cidade, "\n")] = '\0';
    printf("População: ");
    scanf("%d", &carta1_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1_area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta1_pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    // inserir dados carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%3s", carta2_codigo);
    getchar();
    printf("Nome da Cidade: ");
    fgets(carta2_cidade, sizeof carta2_cidade, stdin);
    carta2_cidade[strcspn(carta2_cidade, "\n")] = '\0';
    printf("População: ");
    scanf("%d", &carta2_populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2_area);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &carta2_pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    // cálculos (após leitura)
    double densidade_carta1 = carta1_populacao / (double)carta1_area;
    double densidade_carta2 = carta2_populacao / (double)carta2_area;
    double PPC1 = carta1_pib / (double)carta1_populacao;
    double PPC2 = carta2_pib / (double)carta2_populacao;

    superpoder_carta1 = (carta1_populacao + carta1_area + carta1_pib + carta1_pontos_turisticos + PPC1) / densidade_carta1;
    superpoder_carta2 = (carta2_populacao + carta2_area + carta2_pib + carta2_pontos_turisticos + PPC2) / densidade_carta2;

    printf("Cartas cadastradas com sucesso!\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_cidade);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_carta1);
    printf("PIB per capita: %.2f\n", PPC1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_cidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_carta2);
    printf("PIB per capita: %.2f\n", PPC2);

    if (carta1_populacao > carta2_populacao) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (carta1_area > carta2_area) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (carta1_pib > carta2_pib) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (carta1_pontos_turisticos > carta2_pontos_turisticos) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densidade_carta1 < densidade_carta2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (PPC1 > PPC2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (superpoder_carta1 > superpoder_carta2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
