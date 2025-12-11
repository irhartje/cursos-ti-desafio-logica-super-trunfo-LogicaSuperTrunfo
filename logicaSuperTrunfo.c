#include <stdio.h>

int main()
{
    // Dados para trunfo da carta 1
    char estado1[30], codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1, opcaoAtributo1, opcaoAtributo2;
    int resultadoA, resultadoB;
    float ppc1, densidade1, superPoder1;
    double area1, pib1;

    printf("Digite o Estado da primeira carta: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", codigo1);
    printf("Digite a Cidade da primeira carta: \n");
    scanf("%s", cidade1);
    printf("Digite a populacao da primeira carta: \n");
    scanf("%d", &populacao1);
    printf("Digite o número de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a area da primeira carta: \n");
    scanf("%lf", &area1);
    printf("Digite o PIB da primeira carta: \n");
    scanf("%lf", &pib1);

    double pib1_real = pib1 * 1000000000;
    ppc1 = pib1_real / populacao1;
    densidade1 = (float)populacao1 / area1;
    superPoder1 = (float)populacao1 + pontos_turisticos1 + area1 + pib1 + ppc1 - densidade1;

    // Dados para trunfo da carta 2
    char estado2[30], codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float ppc2, densidade2, superPoder2;
    double area2, pib2;

    printf("Digite o Estado da segunda carta: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", codigo2);
    printf("Digite a Cidade da segunda carta: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao da segunda carta: \n");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a area da segunda carta: \n");
    scanf("%lf", &area2);
    printf("Digite o PIB da segunda carta: \n");
    scanf("%lf", &pib2);

    double pib2_real = pib2 * 1000000000;
    ppc2 = pib2_real / populacao2;
    densidade2 = (float)populacao2 / area2;
    superPoder2 = (float)populacao2 + pontos_turisticos2 + area2 + pib2 + ppc2 - densidade2;

    // mostrar dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("O Estado é: %s \n", estado1);
    printf("O Código é: %s \n", codigo1);
    printf("A Cidade é: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Area: %.3f km² \n", area1);
    printf("PIB: R$ %.3f bilhões \n", pib1);
    printf("PIB per capita: R$ %.2f \n", ppc1);
    printf("Densidade: %.2f hab/km²\n", densidade1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("O Estado é: %s \n", estado2);
    printf("O Código é: %s \n", codigo2);
    printf("A Cidade é: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Area: %.3f km² \n", area2);
    printf("PIB: R$ %.3f bilhões \n", pib2);
    printf("PIB per capita: R$ %.2f \n", ppc2);
    printf("Densidade: %.2f hab/km²\n", densidade2);

    // Escolha atributo 1
    do {
        printf("\n--- Escolha o primeiro atributo ---\n");
        printf("1 - População\n");
        printf("2 - Pontos Turisticos\n");
        printf("3 - Area\n");
        printf("4 - PIB\n");
        printf("5 - PIB per capita\n");
        printf("6 - Densidade Populacional\n");
        printf("Opcao: ");
        scanf("%d", &opcaoAtributo1);
    } while (opcaoAtributo1 < 1 || opcaoAtributo1 > 6);

    // Escolha atributo 2
    do {
        printf("\n--- Escolha o segundo atributo ---\n");
        if (opcaoAtributo1 != 1) printf("1 - População\n");
        if (opcaoAtributo1 != 2) printf("2 - Pontos Turisticos\n");
        if (opcaoAtributo1 != 3) printf("3 - Area\n");
        if (opcaoAtributo1 != 4) printf("4 - PIB\n");
        if (opcaoAtributo1 != 5) printf("5 - PIB per capita\n");
        if (opcaoAtributo1 != 6) printf("6 - Densidade Populacional\n");

        printf("Opcao: ");
        scanf("%d", &opcaoAtributo2);

        if (opcaoAtributo1 == opcaoAtributo2)
            printf("Erro! Você já escolheu esse atributo.\n");

    } while (opcaoAtributo1 == opcaoAtributo2 || opcaoAtributo2 < 1 || opcaoAtributo2 > 6);

    // Switch opcao1
    switch (opcaoAtributo1)
    {
    case 1: resultadoA = (populacao1 > populacao2); break;
    case 2: resultadoA = (pontos_turisticos1 > pontos_turisticos2); break;
    case 3: resultadoA = (area1 > area2); break;
    case 4: resultadoA = (pib1 > pib2); break;
    case 5: resultadoA = (ppc1 > ppc2); break;
    case 6: resultadoA = (densidade1 < densidade2); break;
    }

    // Switch opcao2
    switch (opcaoAtributo2)
    {
    case 1: resultadoB = (populacao1 > populacao2); break;
    case 2: resultadoB = (pontos_turisticos1 > pontos_turisticos2); break;
    case 3: resultadoB = (area1 > area2); break;
    case 4: resultadoB = (pib1 > pib2); break;
    case 5: resultadoB = (ppc1 > ppc2); break;
    case 6: resultadoB = (densidade1 < densidade2); break;
    }

    //Mostrar atributos 1
    printf("\n=========================\n");

    printf("\nPrimeiro Atributo Escolhido: ");
    if (opcaoAtributo1 == 1) printf("População");
    if (opcaoAtributo1 == 2) printf("Pontos Turisticos");
    if (opcaoAtributo1 == 3) printf("Area");
    if (opcaoAtributo1 == 4) printf("PIB");
    if (opcaoAtributo1 == 5) printf("PIB per capita");
    if (opcaoAtributo1 == 6) printf("Densidade Populacional");

    printf("\nValores: Carta 1 = %.2f  | Carta 2 = %.2f\n",
           (opcaoAtributo1 == 1 ? populacao1 :
            opcaoAtributo1 == 2 ? pontos_turisticos1 :
            opcaoAtributo1 == 3 ? area1 :
            opcaoAtributo1 == 4 ? pib1 :
            opcaoAtributo1 == 5 ? ppc1 : densidade1),

           (opcaoAtributo1 == 1 ? populacao2 :
            opcaoAtributo1 == 2 ? pontos_turisticos2 :
            opcaoAtributo1 == 3 ? area2 :
            opcaoAtributo1 == 4 ? pib2 :
            opcaoAtributo1 == 5 ? ppc2 : densidade2)
    );

    printf("Vencedor: Carta %d\n", resultadoA ? 1 : 2);

    // Mostrar atributos 2
    printf("\nSegundo Atributo Escolhido: ");
    if (opcaoAtributo2 == 1) printf("População");
    if (opcaoAtributo2 == 2) printf("Pontos Turisticos");
    if (opcaoAtributo2 == 3) printf("Area");
    if (opcaoAtributo2 == 4) printf("PIB");
    if (opcaoAtributo2 == 5) printf("PIB per capita");
    if (opcaoAtributo2 == 6) printf("Densidade Populacional");

    printf("\nValores: Carta 1 = %.2f  | Carta 2 = %.2f\n",
           (opcaoAtributo2 == 1 ? populacao1 :
            opcaoAtributo2 == 2 ? pontos_turisticos1 :
            opcaoAtributo2 == 3 ? area1 :
            opcaoAtributo2 == 4 ? pib1 :
            opcaoAtributo2 == 5 ? ppc1 : densidade1),

           (opcaoAtributo2 == 1 ? populacao2 :
            opcaoAtributo2 == 2 ? pontos_turisticos2 :
            opcaoAtributo2 == 3 ? area2 :
            opcaoAtributo2 == 4 ? pib2 :
            opcaoAtributo2 == 5 ? ppc2 : densidade2)
    );

    printf("Vencedor: Carta %d\n", resultadoB ? 1 : 2);


    return 0;
}