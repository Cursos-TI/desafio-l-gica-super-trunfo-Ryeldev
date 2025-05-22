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

    int escolha;

    // Variáveis para cálculos
    float densidade1, densidade2;

    // Entrada carta 1
    printf("Digite o estado (Carta 1): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (Carta 1): ");
    scanf("%s", codigodacarta1);
    printf("Digite o nome da cidade (Carta 1): ");
    scanf("%s", nomedacidade1);
    printf("Informe a população (Carta 1): ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km² (Carta 1): ");
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
    printf("Digite a área em km² (Carta 2): ");
    scanf("%f", &areaemkm2);
    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &numerodepontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / areaemkm1;
    densidade2 = populacao2 / areaemkm2;

    // Menu de escolha
    printf("\n### Menu de comparação ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica (menor vence)\n");
    printf("Escolha um atributo de 1-5: ");
    scanf("%d", &escolha);

    printf("\nComparação %s vs %s\n", estado1, estado2);

    switch (escolha) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", estado1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área: %.2f Km² vs %.2f Km²\n", areaemkm1, areaemkm2);
            if (areaemkm1 > areaemkm2) {
                printf("Vencedor: %s\n", estado1);
            } else if (areaemkm1 < areaemkm2) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", estado1);
            } else if (pib1 < pib2) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d vs %d\n", numerodepontosturisticos1, numerodepontosturisticos2);
            if (numerodepontosturisticos1 > numerodepontosturisticos2) {
                printf("Vencedor: %s\n", estado1);
            } else if (numerodepontosturisticos1 < numerodepontosturisticos2) {
                printf("Vencedor: %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Densidade: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor (menor densidade): %s\n", estado1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor (menor densidade): %s\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
