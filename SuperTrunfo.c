#include <stdio.h>

int main()
{
    char estado_carta1[3], estado_carta2[3];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];
    int populacao_carta1, populacao_carta2;
    int numero_de_pontosTuristicos_carta1, numero_de_pontosTuristicos_carta2;
    float area_da_cidade_carta1, area_da_cidade_carta2;
    float PIB_carta1, PIB_carta2;
    float Densidade_Populacional1, Densidade_Populacional2;
    float PIB_perCapita1, PIB_perCapita2;
    float SuperPoderCarta1, SuperPoderCarta2;
    int Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;
    //Dados da Carta 1 abaixo
    printf("Digite a inicial de A a H do seu estado: \n");
    scanf("%s", estado_carta1);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04): \n");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo): \n");
    scanf("%s", nome_da_cidade_carta1);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros): \n");
    scanf("%d", &populacao_carta1);

    printf("Digite a área da cidade (em quilômetros quadrados, use o ponto para marcar casas depois): \n");
    scanf("%f", &area_da_cidade_carta1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB_carta1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontosTuristicos_carta1);

    Densidade_Populacional1 = (float)(populacao_carta1 / area_da_cidade_carta1);

    PIB_perCapita1 = (float)(populacao_carta1 / PIB_carta1);

    SuperPoderCarta1 = (populacao_carta1 + area_da_cidade_carta1 + PIB_carta1 + PIB_perCapita1 + numero_de_pontosTuristicos_carta1 +(1/Densidade_Populacional1));

    //Dados da Carta 2 abaixo
    printf("Digite a inicial de A a H do seu estado (carta 2): \n");
    scanf("%s", estado_carta2);
    
    printf("Digite o Código da sua carta(a inicial dela mais o numero de 01,02,03 ou 04)(carta 2): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade (nome da cidade junta ex:SãoPaulo)(carta 2): \n");
    scanf("%s", nome_da_cidade_carta2);

    printf("Digite o numero de habitantes da cidade escolhida (não use a virgula, apenas numeros)(carta 2): \n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área da cidade (em quilômetros quadrados)(carta 2): \n");
    scanf("%f", &area_da_cidade_carta2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (carta 2): \n");
    scanf("%f", &PIB_carta2);

    printf("Digite a quantidade de pontos turísticos na cidade (carta 2): \n");
    scanf("%d", &numero_de_pontosTuristicos_carta2);

    Densidade_Populacional2 = (float)(populacao_carta2 / area_da_cidade_carta2);

    PIB_perCapita2 = (float)(populacao_carta2 / PIB_carta2);

    SuperPoderCarta2 = (populacao_carta2 + area_da_cidade_carta2 + PIB_carta2 + PIB_perCapita2 + numero_de_pontosTuristicos_carta2 +(1/Densidade_Populacional2));

    // Exibindo os dados da carta 1
    printf("CARTA 1: \n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_da_cidade_carta1);
    printf("PIB: %.2f bilhões de reais\n", PIB_carta1);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta1);
    printf("Densidade populacional é: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_perCapita1);

    // Exibindo os dados da carta 2
    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_da_cidade_carta2);
    printf("PIB: %.2f bilhões de reais\n", PIB_carta2);
    printf("Números de Pontos Turísticos: %d\n", numero_de_pontosTuristicos_carta2);
    printf("Densidade populacional é: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_perCapita2);

    // Comparando os dados das cartas e ver qual vence

    Resultado1 = populacao_carta1 > populacao_carta2;
    Resultado2 = area_da_cidade_carta1 > area_da_cidade_carta2;
    Resultado3 = PIB_carta1 > PIB_carta2;
    Resultado4 = numero_de_pontosTuristicos_carta1 > numero_de_pontosTuristicos_carta2;
    Resultado5 = (1/Densidade_Populacional1) > (1/Densidade_Populacional2);
    Resultado6 = PIB_perCapita1 > PIB_perCapita2;
    Resultado7 = SuperPoderCarta1 > SuperPoderCarta2;

    printf("se for 0 a carta escolhida perdeu, se for 1 a carta escolhida ganhou(neste caso comparando os atriputos da Carta 1 com os da Carta 2).\n");
    printf("População(carta1): (%d)\n", Resultado1);
    printf("Área(carta1): (%d)\n", Resultado2);
    printf("PIB(carta1): (%d)\n", Resultado3);
    printf("Numero de Pontos Turísticos(carta1): (%d)\n", Resultado4);
    printf("Densidade Populacional(carta1): (%d)\n", Resultado5);
    printf("PIB per Capita(carta1): (%d)\n", Resultado6);
    printf("Super Poder(carta1): (%d)\n", Resultado7);
    
    return 0;

}