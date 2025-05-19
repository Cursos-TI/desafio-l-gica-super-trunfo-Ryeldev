#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50], codigodacarta1[50], nomedacidade1[50];
    unsigned long int populacao1;
    float areaemkm1, pib1;
    int numerodepontosturisticos1;

    // Carta 2
    char estado2[50], codigodacarta2[50], nomedacidade2[50];
    unsigned long int populacao2;
    float areaemkm2, pib2;
    int numerodepontosturisticos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada carta 1
    printf("Digite o estado (Carta 1): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (Carta 1): ");
    scanf("%s", codigodacarta1);
    printf("Digite o nome da cidade (Carta 1): ");
    scanf("%s", nomedacidade1);
    printf("Informe a população (Carta 1): ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km (Carta 1): ");
    scanf("%f", &areaemkm1);
    printf("Digite o PIB (Carta 1): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos (Carta 1): ");
    scanf("%d", &numerodepontosturisticos1);

    // Entrada carta 2
    printf("\nDigite o estado (Carta 2): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (Carta 2): ");
    scanf("%s", codigodacarta2);
    printf("Digite o nome da cidade (Carta 2): ");
    scanf("%s", nomedacidade2);
    printf("Informe a população (Carta 2): ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km (Carta 2): ");
    scanf("%f", &areaemkm2);
    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &numerodepontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / areaemkm1;
    pibPerCapita1 = pib1 / populacao1;
    
    densidade2 = populacao2 / areaemkm2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibe as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Comparação
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nCarta 1 venceu (maior PIB per capita)!\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("\nCarta 2 venceu (maior PIB per capita)!\n");
    } else {
        printf("\nEmpate no PIB per capita!\n");
    }

    if (densidade1 < densidade2) {
        printf("Carta 1 venceu (menor densidade populacional)!\n");
    } else if (densidade1 > densidade2) {
        printf("Carta 2 venceu (menor densidade populacional)!\n");
    } else {
        printf("Empate na densidade populacional!\n");
    }

    return 0;
}
