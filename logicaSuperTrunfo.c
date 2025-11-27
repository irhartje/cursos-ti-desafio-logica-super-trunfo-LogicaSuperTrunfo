#include <stdio.h>

int main() { 

    //Dados para trunfo do Estado 1
    char estado1[30], codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
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
    
    printf("\n--- Comparação dos Atributos ---\n");
    printf("Comparação de cartas (Atribudo: PIB per capita) \n");
    
    if (ppc1 > ppc2) {
        printf("Carta 1 - %s (%s): %.2f \n", estado1, codigo1, ppc1);
        printf("Carta 2 - %s (%s): %.2f \n", estado2, codigo2, ppc2);
        printf("Vencedor: Carta 1 - %s (%s) \n", estado1, codigo1);
    } else if (ppc2 > ppc1) {
        printf("Carta 1 - %s (%s): %.2f \n", estado1, codigo1, ppc1);
        printf("Carta 2 - %s (%s): %.2f \n", estado2, codigo2, ppc2);
        printf("Vencedor: Carta 2 - %s (%s) \n", estado2, codigo2);
    } else {
        printf("Carta 1 - %s (%s): %.2f \n", estado1, codigo1, ppc1);
        printf("Carta 2 - %s (%s): %.2f \n", estado2, codigo2, ppc2);
        printf("Empate entre as duas cartas! \n");
    }
        return 0;
}
