#include <stdio.h>
#include <string.h>

int main(){

    char estado1[3], estado2[3];
    char codigocarta1[3], codigocarta2[3], cidade1[50], cidade2[50];
    unsigned int populacao1, populacao2;
    unsigned short pontosturisticos1, pontosturisticos2;
    float area1, area2, densidadepop1, densidadepop2;
    double pib1, pib2, pibpercapita1, pibpercapita2;

    printf(".:::.=================>Carta1<=================.:::.\n");
    // Recepção de dados para carta 1
    printf("\nEstado: ");
    scanf("%2s", estado1);

    printf("Código da carta: ");
    scanf("%2s", codigocarta1);
    
    printf("Cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%hs", &pontosturisticos1);

    printf(".:::.=================>Carta2<=================.:::.\n");
    // Recepção de dados para carta 2
    printf("\nEstado: ");
    scanf("%2s", estado2);

    printf("Código da carta: ");
    scanf("%2s", codigocarta2);
    
    printf("Cidade: ");
    getchar(); // consome o '\n' deixado pelo scanf
    fgets(cidade2, sizeof(cidade2), stdin); // usado no lugar de scanf para textos, nomes com mais de uma palavra
    cidade2[strcspn(cidade2, "\n")] = '\0'; // tira o \n do fgets

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%hs", &pontosturisticos2);

    printf("\n.:::.=================>Super Trunfo Carta1<=================.:::.\n");
    // Iformações e calculos de dados da carta 1
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    printf("%.2f\n", densidadepop1);
    printf("%.2f\n", pibpercapita1);

    printf("\n.:::.=================>Super Trunfo Carta2<=================.:::.\n");
    // Iformações e calculos de dados da carta 2
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    printf("%.2f\n", densidadepop2);
    printf("%.2f\n", pibpercapita2);

    //Escolha de carta vencedora com base no atributo maior entre carta 1 e carta 2.
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}