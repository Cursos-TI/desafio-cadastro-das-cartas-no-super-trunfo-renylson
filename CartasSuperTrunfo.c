#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome_cidade1[51];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome_cidade2[51];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Cálculos para a carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    // Cálculos para a carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade1 < densidade2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder1 > super_poder2));

    return 0;
}