#include <stdio.h>
#include <string.h>

int main(){

    char estado1[3], estado2[3];
    char codigocarta1[3], codigocarta2[3], cidade1[50], cidade2[50];
    unsigned int populacao1, populacao2;
    short pontosturisticos1, pontosturisticos2;
    float area1, area2, densidadepop1, densidadepop2;
    double pib1, pib2, pibpercapita1, pibpercapita2;
    int comparacao;

    printf("     .:::.=================>Carta1<=================.:::.\n");
    // Recepção de dados para carta 1
    printf("\nEstado: ");
    scanf(" %2s", estado1);

    printf("Código da carta: ");
    scanf(" %2s", codigocarta1);
    
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
    scanf(" %hd", &pontosturisticos1);

    printf("     .:::.=================>Carta2<=================.:::.\n");
    // Recepção de dados para carta 2
    printf("\nEstado: ");
    scanf(" %2s", estado2);

    printf("Código da carta: ");
    scanf(" %2s", codigocarta2);
    
    printf("Cidade: ");
    getchar(); // consome o '\n' deixado pelo scanf
    fgets(cidade2, sizeof(cidade2), stdin); // usado no lugar de scanf para receber textos, nomes com mais de uma palavra
    cidade2[strcspn(cidade2, "\n")] = '\0'; // tira o \n do fgets

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %hd", &pontosturisticos2);

    printf("\n     .:::.=================>Super Trunfo Carta1<=================.:::.\n");
    // Iformações e calculos de dados da carta 1
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    printf("População: %u\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepop1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);

    printf("\n     .:::.=================>Super Trunfo Carta2<=================.:::.\n");
    // Iformações e calculos de dados da carta 2
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    printf("População: %u\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Poulacional: %.2f\n", densidadepop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    printf("\n");

    printf("            .::Digite um valor para comparar atributos e ver qual carta vence::.\n");
    printf("1. População x População.\n");
    printf("2. Área x Área.\n");
    printf("3. PIB x PIB.\n");
    printf("4. Pontos Turísticos x Pontos Turísticos\n");
    printf("5. Densidade Populacional x Densidade Populacional.\n");
    printf("6. PIB per Capita x PIB Per Capita.\n");
    printf("Digite um número: ");
    scanf("%d", &comparacao);

    printf("\n");

    switch (comparacao)
    {
    case 1:
        if(populacao1 == populacao2) {
            printf("População Carta 1 => %u x População Carta 2 => %u = Empate!\n", populacao1, populacao2);
        } else if (populacao1 > populacao2) {
            printf("População Carta 1 => %u x População Carta 2 => %u = Carta 1 Venceu!\n", populacao1, populacao2);
        } else {
            printf("População Carta 1 => %u x População Carta 2 => %u = Carta 2 Venceu!\n", populacao1, populacao2);
        } 
        break;
    case 2:
        if(area1 == area2) {
            printf("Área Carta 1 => %f x Área Carta 2 => %f = Empate!\n", area1, area2);
        } else if (area1 > area2) {
            printf("Área Carta 1 => %f x Área Carta 2 => %f = Carta 1 Venceu!\n", area1, area2);
        } else {
            printf("Área Carta 1 => %f x Área Carta 2 => %f = Carta 2 Venceu!\n", area1, area2);
        } 
        break;
    case 3:
        if(pib1 == pib2) {
            printf("PIB Carta 1 => %f x PIB Carta 2 => %f = Empate!\n", pib1, pib2);
        } else if (pib1 > pib2) {
            printf("PIB Carta 1 => %f x PIB Carta 2 => %f = Carta 1 Venceu!\n", pib1, pib2);
        } else {
            printf("PIB Carta 1 => %f x PIB Carta 2 => %f = Carta 2 Venceu!\n", pib1, pib2);
        } 
        break;
    case 4:
        if(pontosturisticos1 == pontosturisticos2) {
            printf("Pontos Turísticos Carta 1 => %d x Pontos Turísticos Carta 2 => %d = Empate!\n", pontosturisticos1, pontosturisticos2);
        } else if (pontosturisticos1 > pontosturisticos2) {
            printf("Pontos Turísticos Carta 1 => %d x Pontos Turísticos Carta 2 => %d = Carta 1 Venceu!\n", pontosturisticos1, pontosturisticos2);
        } else {
            printf("Pontos Turísticos Carta 1 => %d x Pontos Turísticos Carta 2 => %d = Carta 2 Venceu!\n", pontosturisticos1, pontosturisticos2);
        } 
        break; 
    case 5:
        if(densidadepop1 == densidadepop2) {
            printf("Densidade Populacional Carta 1 => %.2f x Densidade Populacional Carta 2 => %.2f = Empate!\n", densidadepop1, densidadepop2);
        } else if (densidadepop1 < densidadepop2) {
            printf("Densidade Populacional Carta 1 => %.2f x Densidade Populacional Carta 2 => %.2f = Carta 1 Venceu!\n", densidadepop1, densidadepop2);
        } else {
            printf("Densidade Populacional Carta 1 => %.2f x Densidade Populacional Carta 2 => %.2f = Carta 2 Venceu!\n", densidadepop1, densidadepop2);
        } 
        break;
    case 6:
        if(pibpercapita1 == pibpercapita2) {
            printf("PIB per Capita Carta 1 => %.2f x PIB per Capita Carta 2 => %.2f = Empate!\n", pibpercapita1, pibpercapita2);
        } else if (pibpercapita1 > pibpercapita2) {
            printf("PIB per Capita Carta 1 => %.2f x PIB per Capita Carta 2 => %.2f = Carta 1 Venceu!\n", pibpercapita1, pibpercapita2);
        } else {
            printf("PIB per Capita Carta 1 => %.2f x PIB per Capita Carta 2 => %.2f = Carta 2 Venceu!\n", pibpercapita1, pibpercapita2);
        } 
        break;
    default:
        printf("Número inválido.\n");
        break;

    return 0;

    }



    













    //Escolha de carta vencedora com base no atributo maior entre carta 1 e carta 2.
    //printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    //printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);



    /*if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } */
    return 0;
}