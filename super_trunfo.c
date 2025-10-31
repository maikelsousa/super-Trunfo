#include <stdio.h>

int main()
{
    
    // carta1
    char carta1_estado, carta1_codigo[4], carta1_cidade[50];
    int carta1_populacao, carta1_pontos_turisticos;
    float carta1_area;
    double carta1_pib;
    float superpoder_carta1;

    // carta2
    char carta2_estado, carta2_codigo[4], carta2_cidade[50];
    int carta2_populacao, carta2_pontos_turisticos;
    float carta2_area;
    float carta2_pib;
    float superpoder_carta2;

    // operacoes densidade
 
    // Calcular o PIB per Capita
  

    int opcao;

    printf("Digite 1 para cadastrar uma nova Carta \n ou 2 para usar cartas cadastradas");
    scanf("%d", &opcao);
     float PPC1 = carta1_pib / carta1_populacao;
     float PPC2 = carta2_pib / carta2_populacao;

    switch (opcao)
    {
    case 1:

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
        float densidade_carta1 = carta1_populacao / carta1_area;
        
        float superpoder_carta1 = (carta1_populacao + carta1_area + carta1_pib + carta1_pontos_turisticos + PPC1) / densidade_carta1;

        // inserir dados carta 2
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
        scanf("%f", &carta2_pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &carta2_pontos_turisticos);

        
         float densidade_carta2 = carta2_populacao / carta2_area;
        float superpoder_carta2 = (carta2_populacao + carta2_area + carta2_pib + carta2_pontos_turisticos + PPC2) / densidade_carta2;

        printf("Cartas cadastradas com sucesso!\n");
        printf("\nCarta 1:\n");
        printf("Estado: %c", carta1_estado);
        printf("Código: %s", carta1_codigo);
        printf("Nome da Cidade: %s", carta1_cidade);
        printf("População: %d", carta1_populacao);
        printf("Área: %.2f km²", carta1_area);
        printf("PIB: %.2f bilhões de reais", carta1_pib);
        printf("Número de Pontos Turísticos: %d", carta1_pontos_turisticos);
        printf("Densidade populaciona : %.2f", densidade_carta1);
        printf("PIB per capta :  %.2f", PPC1);

        printf("\nCarta 2:\n");
        printf("Estado: %c", carta2_estado);
        printf("Código: %s", carta2_codigo);
        printf("Nome da Cidade: %s", carta2_cidade);
        printf("População: %d", carta2_populacao);
        printf("Área: %.2f km²", carta2_area);
        printf("PIB: %.2f bilhões de reais", carta2_pib);
        printf("Número de Pontos Turísticos: %d", carta2_pontos_turisticos);
        printf("Densidade populaciona : %.2f", densidade_carta2);
        printf("PIB per capta :  %.2f", PPC2);
        break;

    case 2:
        // Carta Exemplo 1
        char estado_exemplo1 = 'SP'; // São Paulo
        char codigo_exemplo1[] = "SP123";
        char cidade_exemplo1[] = "São Paulo";
        int populacao_exemplo1 = 12300000;
        float area_exemplo1 = 1521.11;
        float pib_exemplo1 = 780.50; // em bilhões de reais
        int pontos_turisticos_exemplo1 = 25;
        float densidade_exemplo1 = populacao_exemplo1 / area_exemplo1;
        float ppc_exemplo1 = 300000;

        // Carta Exemplo 2
        char estado_exemplo2 = 'RJ'; // Rio de Janeiro
        char codigo_exemplo2[] = "RJ456";
        char cidade_exemplo2[] = "Rio de Janeiro";
        int populacao_exemplo2 = 6748000;
        float area_exemplo2 = 1182.30;
        float pib_exemplo2 = 360.75; // em bilhões de reais
        int pontos_turisticos_exemplo2 = 30;
        float densidade_exemplo2 = populacao_exemplo2 / area_exemplo2;
        float ppc_exemplo2 = 20000;

        int compare;
        printf("Escolha o atributo para de duelo da carta\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - PIB per Capita\n");

        scanf("%d", &compare);
 // O nome dos dois países.
// O atributo usado na comparação.
// Os valores do atributo para cada carta.
// Qual carta venceu.
// Em caso de empate, exibir a mensagem "Empate!".
        switch (compare)
        {
        case 1:
            if (populacao_exemplo1 > populacao_exemplo2)
            {
                printf("Carta 1 venceu com população %d contra %d\n", populacao_exemplo1, populacao_exemplo2);
            }
            else if (populacao_exemplo1 < populacao_exemplo2)
            {
                printf("Carta 2 venceu com população %d contra %d\n", populacao_exemplo2, populacao_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm população %d\n", populacao_exemplo1);
            }
            break;
        case 2:
            if (area_exemplo1 > area_exemplo2)
            {
                printf("Carta 1 venceu com área %.2f km² contra %.2f km²\n", area_exemplo1, area_exemplo2);
            }
            else if (area_exemplo1 < area_exemplo2)
            {
                printf("Carta 2 venceu com área %.2f km² contra %.2f km²\n", area_exemplo2, area_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm área %.2f km²\n", area_exemplo1);
            }
            break;
            case 3:
            if (pib_exemplo1 > pib_exemplo2)
            {
                printf("Carta 1 venceu com PIB %.2f bilhões contra %.2f bilhões\n", pib_exemplo1, pib_exemplo2);
            }
            else if (pib_exemplo1 < pib_exemplo2)
            {
                printf("Carta 2 venceu com PIB %.2f bilhões contra %.2f bilhões\n", pib_exemplo2, pib_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm PIB %.2f bilhões\n", pib_exemplo1);
            }
            break;
            case 4:
            if (pontos_turisticos_exemplo1 > pontos_turisticos_exemplo2)
            {
                printf("Carta 1 venceu com %d pontos turísticos contra %d\n", pontos_turisticos_exemplo1, pontos_turisticos_exemplo2);
            }
            else if (pontos_turisticos_exemplo1 < pontos_turisticos_exemplo2)
            {
                printf("Carta 2 venceu com %d pontos turísticos contra %d\n", pontos_turisticos_exemplo2, pontos_turisticos_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm %d pontos turísticos\n", pontos_turisticos_exemplo1);
            }
            break;
        case 5:
            if (densidade_exemplo1 < densidade_exemplo2)
            {
                printf("Carta 1 venceu com densidade %.2f contra %.2f\n", densidade_exemplo1, densidade_exemplo2);
            }
            else if (densidade_exemplo1 > densidade_exemplo2)
            {
                printf("Carta 2 venceu com densidade %.2f contra %.2f\n", densidade_exemplo2, densidade_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm densidade %.2f\n", densidade_exemplo1);
            }
            break;
        case 6:
            if (ppc_exemplo1 > ppc_exemplo2)
            {
                printf("Carta 1 venceu com PIB per Capita %.2f contra %.2f\n", ppc_exemplo1, ppc_exemplo2);
            }
            else if (ppc_exemplo1 < ppc_exemplo2)
            {
                printf("Carta 2 venceu com PIB per Capita %.2f contra %.2f\n", ppc_exemplo2, ppc_exemplo1);
            }
            else
            {
                printf("Empate! Ambas as cartas têm PIB per Capita %.2f\n", ppc_exemplo1);
            }
            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 6.\n");
            break;
    }

    // criar entrada para analizar combate

    if (carta1_populacao > carta2_populacao)
    {
        printf("População: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("População: Carta 2 venceu (0)\n");
    }
    if (carta1_area > carta2_area)
    {
        printf("Área: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Área: Carta 2 venceu (0)\n");
    }
    if (carta1_pib > carta2_pib)
    {
        printf("PIB: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    if (carta1_pontos_turisticos > carta2_pontos_turisticos)
    {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    if (densidade_carta1 < densidade_carta2)
    {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    if (PPC1 > PPC2)
    {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    if (superpoder_carta1 > superpoder_carta2)
    {
        printf("Super Poder: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}