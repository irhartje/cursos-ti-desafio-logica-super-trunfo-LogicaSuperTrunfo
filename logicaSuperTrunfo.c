#include <stdio.h>

int main() { 

    //Dados para trunfo do Estado 1
    char estado1[30], codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1, opcaoAtributo;
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

    //Calculo do PPC e densidade populacional da primeira carta
    double pib1_real = pib1 * 1000000000;
    ppc1 = pib1_real / populacao1;
    densidade1 = (float) populacao1 / area1;
    superPoder1 = (float) populacao1 + pontos_turisticos1 + area1 + pib1 + ppc1 - densidade1;

    //Dados para trunfo do Estado 2
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

    //Calculo do PPC e densidade populacional da segunda carta
        double pib2_real = pib2 * 1000000000;
        ppc2 = pib2_real / populacao2;
        densidade2 = (float) populacao2 / area2;
        superPoder2 = (float) populacao2 + pontos_turisticos2 + area2 + pib2 + ppc2 - densidade2;

    //Exibição dos dados da primeira carta    
        printf("\n--- Dados da Primeira Carta ---\n");
        printf("O Estado é: %s \n", estado1);
        printf("O Código é: %s \n", codigo1);
        printf("A Cidade é: %s \n", cidade1);
        printf("A Populacao é de: %d habitantes \n", populacao1);
        printf("Número de Pontos Turisticos: %d \n", pontos_turisticos1);
        printf("Area Total: %.3f  km² \n", area1);
        printf("PIB Total: R$ %.3f bilhões \n", pib1);
        printf("PIB per capita: R$ %.2f \n", ppc1);
        printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
        printf("Super Poder: %.2f \n", superPoder1);

    //Exibição dos dados da segunda carta    
        printf("\n--- Dados da Segunda Carta ---\n");
        printf("O Estado é: %s \n", estado2);
        printf("O Código é: %s \n", codigo2);  
        printf("A Cidade é: %s \n", cidade2);
        printf("A Populacao é de: %d habitantes \n", populacao2);
        printf("Número de Pontos Turisticos: %d \n", pontos_turisticos2);
        printf("Area Total: %.3f  km² \n", area2);
        printf("PIB Total: R$ %.3f bilhões \n", pib2);
        printf("PIB per capita: R$ %.2f \n", ppc2);
        printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
        printf("Super Poder: %.2f \n", superPoder2);

    //Comparar o atributo escolhido e usar estrutura de condição para determinar o vencedor.
    
    printf("\n--- Escolha qual atributo a ser comparado ---\n");
    printf("1 - População\n");
    printf("2 - Pontos Turisticos\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade Populacional\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &opcaoAtributo);

    switch(opcaoAtributo) {
        case 1: //População
            if(populacao1 > populacao2) {
                printf("%s vence na População!\n", estado1);
            } else if(populacao2 > populacao1) {
                printf("%s vence na População!\n", estado2);
            } else {
                printf("\nEmpate na População!\n");
            }
            break;
        case 2: //Pontos Turisticos
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("%s vence nos Pontos Turisticos!\n", estado1);
            } else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("%s vence nos Pontos Turisticos!\n", estado2);
            } else {
                printf("Empate nos Pontos Turisticos!\n");
            }
            break;
        case 3: //Area
            if(area1 > area2) {
                printf("%s vence na Area!\n", estado1);
            } else if(area2 > area1) {
                printf("%s vence na Area!\n", estado2);
            } else {
                printf("Empate na Area!\n");
            }
            break; 
        case 4: //PIB
            if(pib1 > pib2) {
                printf("%s vence no PIB!\n", estado1);
            } else if(pib2 > pib1) {
                printf("%s vence no PIB!\n", estado2);
            } else {
                printf("Empate no PIB!\n");
            }
            break;
        case 5: //PIB per capita
            if(ppc1 > ppc2) {
                printf("%s vence no PIB per capita!\n", estado1);
            } else if(ppc2 > ppc1) {
                printf("%s vence no PIB per capita!\n", estado2);
            } else {
                printf("Empate no PIB per capita!\n");
            }
            break;
        case 6: //Densidade Populacional
            if(densidade1 < densidade2) {
                printf("%s vence na Densidade Populacional!\n", estado1);
            } else if(densidade2 < densidade1) {
                printf("%s vence na Densidade Populacional!\n", estado2);
            } else {
                printf("Empate na Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
        return 0;
}
