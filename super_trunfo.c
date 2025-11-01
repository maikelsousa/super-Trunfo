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

    int opcao;

    printf("Digite 1 para cadastrar uma nova Carta ou 2 para usar cartas cadastradas: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // inserir dados carta 1
        printf("\nHello, Super Trunfo!\n");
        printf("Insira os dados da Carta 1:\n");
        printf("Estado (A-H): ");
        scanf(" %c", &carta1_estado);
        printf("Código da Carta (ex: A01): ");
        scanf("%s", carta1_codigo);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", carta1_cidade);
        printf("População: ");
        scanf("%d", &carta1_populacao);
        printf("Área (em km²): ");
        scanf("%f", &carta1_area);
        printf("PIB (em bilhões de reais): ");
        scanf("%lf", &carta1_pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &carta1_pontos_turisticos);

        // calcular densidade e superpoder carta 1
        float densidade_carta1 = carta1_populacao / carta1_area;
        float PPC1 = carta1_pib / carta1_populacao;
        superpoder_carta1 = (carta1_populacao + carta1_area + carta1_pib + carta1_pontos_turisticos + PPC1) / densidade_carta1;

        // inserir dados carta 2
        printf("\nInsira os dados da Carta 2:\n");
        printf("Estado (A-H): ");
        scanf(" %c", &carta2_estado);
        printf("Código da Carta (ex: A01): ");
        scanf("%s", carta2_codigo);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", carta2_cidade);
        printf("População: ");
        scanf("%d", &carta2_populacao);
        printf("Área (em km²): ");
        scanf("%f", &carta2_area);
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &carta2_pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &carta2_pontos_turisticos);

        // calcular densidade e superpoder carta 2
        float densidade_carta2 = carta2_populacao / carta2_area;
        float PPC2 = carta2_pib / carta2_populacao;
        superpoder_carta2 = (carta2_populacao + carta2_area + carta2_pib + carta2_pontos_turisticos + PPC2) / densidade_carta2;

        //exibir cartas cadastradas
        printf("\nCartas cadastradas com sucesso!\n");
        
        //carta 1
        printf("\n===== Carta 1 =====\n");
        printf("Estado: %c\n", carta1_estado);
        printf("Código: %s\n", carta1_codigo);
        printf("Nome da Cidade: %s\n", carta1_cidade);
        printf("População: %d\n", carta1_populacao);
        printf("Área: %.2f km²\n", carta1_area);
        printf("PIB: %.2f bilhões de reais\n", carta1_pib);
        printf("Número de Pontos Turísticos: %d\n", carta1_pontos_turisticos);
        printf("Densidade populacional: %.2f\n", densidade_carta1);
        printf("PIB per capita: %.2f\n", PPC1);
        
        //carta 2
        printf("\n===== Carta 2 =====\n");
        printf("Estado: %c\n", carta2_estado);
        printf("Código: %s\n", carta2_codigo);
        printf("Nome da Cidade: %s\n", carta2_cidade);
        printf("População: %d\n", carta2_populacao);
        printf("Área: %.2f km²\n", carta2_area);
        printf("PIB: %.2f bilhões de reais\n", carta2_pib);
        printf("Número de Pontos Turísticos: %d\n", carta2_pontos_turisticos);
        printf("Densidade populacional: %.2f\n", densidade_carta2);
        printf("PIB per capita: %.2f\n", PPC2);
        break;

    case 2:
        // Carta Exemplo 1
        carta1_estado = 'S'; // São Paulo
        sprintf(carta1_codigo, "SP1");
        sprintf(carta1_cidade, "São Paulo");
        carta1_populacao = 12300000;
        carta1_area = 1521.11;
        carta1_pib = 780.50;
        carta1_pontos_turisticos = 25;
        float densidade_exemplo1 = carta1_populacao / carta1_area;
        float ppc_exemplo1 = carta1_pib / carta1_populacao;
        superpoder_carta1 = (carta1_populacao + carta1_area + carta1_pib + carta1_pontos_turisticos + ppc_exemplo1) / densidade_exemplo1;

        // Carta Exemplo 2
        carta2_estado = 'R'; // Rio de Janeiro
        sprintf(carta2_codigo, "RJ4");
        sprintf(carta2_cidade, "Rio de Janeiro");
        carta2_populacao = 6748000;
        carta2_area = 1182.30;
        carta2_pib = 360.75;
        carta2_pontos_turisticos = 30;
        float densidade_exemplo2 = carta2_populacao / carta2_area;
        float ppc_exemplo2 = carta2_pib / carta2_populacao;
        superpoder_carta2 = (carta2_populacao + carta2_area + carta2_pib + carta2_pontos_turisticos + ppc_exemplo2) / densidade_exemplo2;

        printf("\nCartas de exemplo carregadas!\n");
        printf("\n===== Carta 1 - São Paulo =====\n");
        printf("População: %d\n", carta1_populacao);
        printf("Área: %.2f km²\n", carta1_area);
        printf("PIB: %.2f bilhões\n", carta1_pib);
        printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);
        
        printf("\n===== Carta 2 - Rio de Janeiro =====\n");
        printf("População: %d\n", carta2_populacao);
        printf("Área: %.2f km²\n", carta2_area);
        printf("PIB: %.2f bilhões\n", carta2_pib);
        printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);
        break;

    default:
        printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
        return 1;
    }

    // Menu de comparação
    int expression;
    printf("\n\nComparar cartas completas ou somente atributos?\n");
    printf("1 - Cartas Completas\n");
    printf("2 - Somente Atributos\n");
    scanf("%d", &expression);

    switch (expression)
    {
    case 1: // Comparar cartas completas
        printf("\n===== COMPARAÇÃO COMPLETA =====\n");
        
        if (carta1_populacao > carta2_populacao)
        {
            printf("População: Carta 1 venceu (%d > %d)\n", carta1_populacao, carta2_populacao);
        }
        else if (carta1_populacao < carta2_populacao)
        {
            printf("População: Carta 2 venceu (%d > %d)\n", carta2_populacao, carta1_populacao);
        }
        else
        {
            printf("População: Empate! (%d)\n", carta1_populacao);
        }

        if (carta1_area > carta2_area)
        {
            printf("Área: Carta 1 venceu (%.2f km² > %.2f km²)\n", carta1_area, carta2_area);
        }
        else if (carta1_area < carta2_area)
        {
            printf("Área: Carta 2 venceu (%.2f km² > %.2f km²)\n", carta2_area, carta1_area);
        }
        else
        {
            printf("Área: Empate! (%.2f km²)\n", carta1_area);
        }
        
        if (carta1_pib > carta2_pib)
        {
            printf("PIB: Carta 1 venceu (%.2f > %.2f bilhões)\n", carta1_pib, carta2_pib);
        }
        else if (carta1_pib < carta2_pib)
        {
            printf("PIB: Carta 2 venceu (%.2f > %.2f bilhões)\n", carta2_pib, carta1_pib);
        }
        else
        {
            printf("PIB: Empate! (%.2f bilhões)\n", carta1_pib);
        }
        
        if (carta1_pontos_turisticos > carta2_pontos_turisticos)
        {
            printf("Pontos Turísticos: Carta 1 venceu (%d > %d)\n", carta1_pontos_turisticos, carta2_pontos_turisticos);
        }
        else if (carta1_pontos_turisticos < carta2_pontos_turisticos)
        {
            printf("Pontos Turísticos: Carta 2 venceu (%d > %d)\n", carta2_pontos_turisticos, carta1_pontos_turisticos);
        }
        else
        {
            printf("Pontos Turísticos: Empate! (%d)\n", carta1_pontos_turisticos);
        }
        
        if (superpoder_carta1 > superpoder_carta2)
        {
            printf("Super Poder: Carta 1 venceu!\n");
        }
        else if (superpoder_carta1 < superpoder_carta2)
        {
            printf("Super Poder: Carta 2 venceu!\n");
        }
        else
        {
            printf("Super Poder: Empate!\n");
        }
        break;

    case 2: // Comparar somente atributos
        {
            int carta1_atributo1, carta1_atributo2;
            printf("\nEscolha o primeiro atributo da Carta 1:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            scanf("%d", &carta1_atributo1);
            
            printf("Escolha o segundo atributo da Carta 1:\n");
            scanf("%d", &carta1_atributo2);

            int carta2_atributo1, carta2_atributo2;
            printf("\nEscolha o primeiro atributo da Carta 2:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            scanf("%d", &carta2_atributo1);
            
            printf("Escolha o segundo atributo da Carta 2:\n");
            scanf("%d", &carta2_atributo2);

            float valor_carta1_1 = 0, valor_carta1_2 = 0;
            float valor_carta2_1 = 0, valor_carta2_2 = 0;

            // Obter valores da carta 1
            if (carta1_atributo1 == 1) valor_carta1_1 = carta1_populacao;
            else if (carta1_atributo1 == 2) valor_carta1_1 = carta1_area;
            else if (carta1_atributo1 == 3) valor_carta1_1 = carta1_pib;
            else if (carta1_atributo1 == 4) valor_carta1_1 = carta1_pontos_turisticos;

            if (carta1_atributo2 == 1) valor_carta1_2 = carta1_populacao;
            else if (carta1_atributo2 == 2) valor_carta1_2 = carta1_area;
            else if (carta1_atributo2 == 3) valor_carta1_2 = carta1_pib;
            else if (carta1_atributo2 == 4) valor_carta1_2 = carta1_pontos_turisticos;

            // Obter valores da carta 2
            if (carta2_atributo1 == 1) valor_carta2_1 = carta2_populacao;
            else if (carta2_atributo1 == 2) valor_carta2_1 = carta2_area;
            else if (carta2_atributo1 == 3) valor_carta2_1 = carta2_pib;
            else if (carta2_atributo1 == 4) valor_carta2_1 = carta2_pontos_turisticos;

            if (carta2_atributo2 == 1) valor_carta2_2 = carta2_populacao;
            else if (carta2_atributo2 == 2) valor_carta2_2 = carta2_area;
            else if (carta2_atributo2 == 3) valor_carta2_2 = carta2_pib;
            else if (carta2_atributo2 == 4) valor_carta2_2 = carta2_pontos_turisticos;

            float poder_total_carta1 = valor_carta1_1 + valor_carta1_2;
            float poder_total_carta2 = valor_carta2_1 + valor_carta2_2;

            printf("\n===== RESULTADO =====\n");
            printf("Carta 1: %.2f + %.2f = %.2f\n", valor_carta1_1, valor_carta1_2, poder_total_carta1);
            printf("Carta 2: %.2f + %.2f = %.2f\n", valor_carta2_1, valor_carta2_2, poder_total_carta2);

            if (poder_total_carta1 > poder_total_carta2)
            {
                printf("\nCarta 1 venceu com poder total %.2f contra %.2f!\n", poder_total_carta1, poder_total_carta2);
            }
            else if (poder_total_carta1 < poder_total_carta2)
            {
                printf("\nCarta 2 venceu com poder total %.2f contra %.2f!\n", poder_total_carta2, poder_total_carta1);
            }
            else
            {
                printf("\nEmpate! Ambas as cartas têm poder total %.2f\n", poder_total_carta1);
            }
        }
        break;

    default:
        printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
        break;
    }

    return 0;
}
