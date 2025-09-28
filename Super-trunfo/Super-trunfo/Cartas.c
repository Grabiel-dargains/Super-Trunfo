#include <stdio.h>
#include <stdbool.h>
#include <string.h> // <-- NECESSÁRIA para a função sprintf

int main() {
    // --- Variáveis para a CARTA 1 ---
    char estado1;
    char codigo_num1[3];
    char codigo1[4];
    int populacao1, pontos_turisticos1;
    float pib1, area1;
    char nome_da_cidade1[50];
    float densidade1, percapta1, superpoder1;
    char output_carta1[500]; // String para guardar o texto completo da carta 1

    // --- Variáveis para a CARTA 2 ---
    char estado2;
    char codigo_num2[3];
    char codigo2[4];
    int populacao2, pontos_turisticos2;
    float pib2, area2;
    char nome_da_cidade2[50];
    float densidade2, percapta2, superpoder2;
    char output_carta2[500]; // String para guardar o texto completo da carta 2

    int counter = 0;

    // ==========================================================
    // Leitura dos dados da CARTA 1
    // ==========================================================
    printf("--- Insira os dados para a primeira carta ---\n");
    printf("Escolha uma letra de A-H: ");
    scanf(" %c", &estado1);

    printf("Escolha um numero entre 01-04: ");
    scanf("%s", codigo_num1);

    sprintf(codigo1, "%c%s", estado1, codigo_num1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos a cidade tem? ");
    scanf("%i", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    percapta1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + percapta1 + pontos_turisticos1 + (populacao1 / densidade1);

    // CORREÇÃO: Monta a string completa da carta 1 usando sprintf
    sprintf(output_carta1,
            "Estado: %c\n"
            "Codigo da carta: %s\n"
            "Nome da cidade: %s\n"
            "Populacao: %i\n"
            "Area: %.2f km^2\n"
            "PIB: %.2f\n"
            "Qtd Pontos Turisticos: %i\n"
            "Densidade populacional: %.2f hab/km^2\n"
            "PIB per capta: %.2f reais.\n"
            "Super poder: %.2f",
            estado1, codigo1, nome_da_cidade1, populacao1, area1, pib1,
            pontos_turisticos1, densidade1, percapta1, superpoder1);

    // ==========================================================
    // Leitura dos dados da CARTA 2
    // ==========================================================
    printf("\n--- Insira os dados para a segunda carta ---\n");
    printf("Escolha uma letra de A-H: ");
    scanf(" %c", &estado2);

    printf("Escolha um numero entre 01-04: ");
    scanf("%s", codigo_num2);

    sprintf(codigo2, "%c%s", estado2, codigo_num2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade tem? ");
    scanf("%i", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + percapta2 + pontos_turisticos2 + (populacao2 / densidade2);

    // CORREÇÃO: Monta a string completa da carta 2 usando sprintf
    sprintf(output_carta2,
            "Estado: %c\n"
            "Codigo da carta: %s\n"
            "Nome da cidade: %s\n"
            "Populacao: %i\n"
            "Area: %.2f km^2\n"
            "PIB: %.2f\n"
            "Qtd Pontos Turisticos: %i\n"
            "Densidade populacional: %.2f hab/km^2\n"
            "PIB per capta: %.2f reais.\n"
            "Super poder: %.2f",
            estado2, codigo2, nome_da_cidade2, populacao2, area2, pib2,
            pontos_turisticos2, densidade2, percapta2, superpoder2);

    // ==========================================================
    // Impressão das cartas e depois a Comparação
    // ==========================================================
    printf("\n\n--- DADOS DAS CARTAS ---\n");
    printf("%s\n", output_carta1); // Imprime a primeira carta de uma vez
    printf("==========================\n");
    printf("%s\n", output_carta2); // Imprime a segunda carta de uma vez
    printf("==========================\n");
    printf("\nComparando pontuacao:\n");

    printf("\nPopulacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! %i > %i", populacao1, populacao2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %i > %i", populacao2, populacao1);
    }

    printf("\nArea: ");
    if (area1 > area2) {
        printf("Carta 1 venceu! %.2f > %.2f", area1, area2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %.2f > %.2f", area2, area1);
    }

    printf("\nPIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu! %.2f > %.2f", pib1, pib2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %.2f > %.2f", pib2, pib1);
    }

    printf("\nPIB per capta: ");
    if (percapta1 > percapta2) {
        printf("Carta 1 venceu! %.2f > %.2f", percapta1, percapta2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %.2f > %.2f", percapta2, percapta1);
    }

    printf("\nPontos Turisticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 venceu! %i > %i", pontos_turisticos1, pontos_turisticos2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %i > %i", pontos_turisticos2, pontos_turisticos1);
    }

    printf("\nDensidade populacional: ");
    if (densidade1 > densidade2) {
        printf("Carta 1 venceu! %.2f > %.2f", densidade1, densidade2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %.2f > %.2f", densidade2, densidade1);
    }

    printf("\nSuper Poder: ");
    if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu! %.2f > %.2f", superpoder1, superpoder2);
        counter += 1;
    } else {
        printf("Carta 2 venceu! %.2f > %.2f", superpoder2, superpoder1);
    }

    printf("\n\n==========================\n");
    if (counter > 3) {
        printf("A Carta 1 [%s] venceu a rodada!\n", nome_da_cidade1);
    } else {
        printf("A Carta 2 [%s] venceu a rodada!\n", nome_da_cidade2);
    }
    printf("Fim de jogo!\n");

    return 0;
}

