#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    char estado1, estado2;
    char codigodacarta1[20], codigodacarta2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, Pturisticos1, Pturisticos2;
    float area1, area2, densidade1, densidade2, pib1, pib2, pibpercpt1, pibpercpt2;


    printf("escolha uma letra(de A até H) para a primeira carta: ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta(é a letra do estado mais um número ex:A01, B03): ");
    scanf("%s", codigodacarta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);


    printf("Informe a área Urbana da cidade(em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB(produto interno bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Informe quantos pontos turisticos existem na cidade: ");
    scanf("%d", &Pturisticos1);

    printf("\n");

    printf("escolha uma letra(de A até H) para a segunda carta: ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta(é a letra do estado mais um número ex:A01, B03): ");
    scanf("%s", codigodacarta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área Urbana da cidade(em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB(produto interno bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turisticos existem na cidade: ");
    scanf("%d", &Pturisticos2);


    printf("\n");


    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    densidade1 = (float)populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    pibpercpt1 = (float)pib1 / populacao1;
    printf("PIB per Capita: %.2f reais\n", pibpercpt1);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    densidade2 = (float)populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    pibpercpt2 = (float)pib2 / populacao2;
    printf("PIB per Capita: %.2f reais\n", pibpercpt2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);


return 0;
} 
