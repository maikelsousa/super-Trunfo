#include <stdio.h>

 

// Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
// Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
// Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
 

// Exemplo de Saída:


// Carta 1:

// Estado: A

// Código: A01

// Nome da Cidade: São Paulo

// População: 12325000

// Área: 1521.11 km²

// PIB: 699.28 bilhões de reais

// Número de Pontos Turísticos: 50

// Densidade Populacional: 8102.47 hab/km²

// PIB per Capita: 56724.32 reais

 

// Carta 2:

// Estado: B

// Código: B02

// Nome da Cidade: Rio de Janeiro

// População: 6748000

// Área: 1200.25 km²

// PIB: 300.50 bilhões de reais

// Número de Pontos Turísticos: 30

// Densidade Populacional: 5622.24 hab/km²

// PIB per Capita: 44532.91 reais

 
int main() {
    //carta1
    char carta1_estado, carta1_codigo[4], carta1_cidade[50];
    int carta1_populacao, carta1_pontos_turisticos;
    float carta1_area;
    double carta1_pib;
  
 

    //carta2
    char carta2_estado, carta2_codigo[4], carta2_cidade[50];
    int carta2_populacao, carta2_pontos_turisticos;
    float carta2_area,
    double carta2_pib;

  // operacoes densidade
 float densidade_carta1 = carta1_populacao / carta1_area;
 float densidade_carta2= carta2_populacao / carta2_area;

  //Calcular o PIB per Capita
 float PPC1 = carta1_pib / carta1_populacao;
 float ppc2 = carta2_pib / carta2_populacao;
 
  
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
    printf("Densidade populaciona : %.2f", densidade_carta1);
    printf("PIB per capta :  %.2f", PPC1);

    printf("\nCarta 2:\n");
    printf("Estado: %c",carta2_estado);
    printf("Código: %s",carta2_codigo);
    printf("Nome da Cidade: %s",carta2_cidade);
    printf("População: %d",carta2_populacao);
    printf("Área: %.2f km²",carta2_area);
    printf("PIB: %.2f bilhões de reais",carta2_pib);
    printf("Número de Pontos Turísticos: %d",carta2_pontos_turisticos);
    printf("Densidade populaciona : %.2f", densidade_carta2);
    printf("PIB per capta :  %.2f", PPC2);

 
   

    return 0;
}
