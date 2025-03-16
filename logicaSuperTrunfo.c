#include <stdio.h>

int main() {
    //incluindo variavei da carta 1
    char estado1[2], cidade1[20], codigo1[4];
    int populacao1, pturistico1;
    float area1, pib1, densidadepopulacional1, pibpercapita1;
    
    //variaveis da carta 2
    char estado2[2], cidade2[20], codigo2[4];
    int populacao2, pturistico2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;
   
    //atribuindo valores em cada variavel da carta 1 com printf e scanf
    printf("\nCarta 1: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado1);
    getchar();  

    printf("\nDigite o Código: ");
    scanf("%s", codigo1);
    getchar();  

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade1);
    getchar(); 

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao1);

    printf("\nDigite a Área: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

// calculando densidade populacionar e pib per capita da carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1; 

    //atribuindo valores em cada variavel da carta 2 com printf e scanf
    printf("\nCarta 2: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado2);
    getchar();  

    printf("\nDigite o Código: ");
    scanf("%s", codigo2);
    getchar();  

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade2);
    getchar();  

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Área: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

// calculando densidade populacionar e pib per capita da carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2; 


    //após ter atribuido cada valor em cada varivel na carta 1, agora apresentando cada uma com printf 
    printf("\n\nCarta 1: ");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %f km²", area1);  
    printf("\nPIB: %f de reais", pib1);  
    printf("\nNúmero de Pontos Turísticos: %d", pturistico1);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional1);
    printf("\nPib per Capita é: %f", pibpercapita1);

    //após ter atribuido cada valor em cada varivel na carta 2, agora apresentando cada uma com printf
    printf("\n\nCarta 2: ");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f km²", area2);  
    printf("\nPIB: %f de reais", pib2);  
    printf("\nNúmero de Pontos Turísticos: %d\n", pturistico2);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional2);
    printf("\nPib per Capita é: %f", pibpercapita2);

    // comparando carta 1 com carta 2
    if (populacao1 > populacao2)
    {
        printf("\nPopulação : Carta 1 venceu!");
    } else
    {
        printf("\nPopulação : Carta 2 venceu!");
    }
    
    if (area1 > area2)
    {
        printf("\nÁrea : Carta 1 venceu!");
    } else
    {
        printf("\nÁrea : Carta 2 venceu!");
    }

    if (pib1 > pib2)
    {
        printf("\nPIB : Carta 1 venceu!");
    } else
    {
        printf("\nPIB : Carta 2 venceu!");
    }

    if (pturistico1 > pturistico2)
    {
        printf("\nPontos Turisticos : Carta 1 venceu!");
    } else
    {
        printf("\nPontos Turisticos : Carta 2 venceu!");
    }

    if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("\nDensidade Populacional : Carta 1 venceu!");
    } else
    {
        printf("\nDensidade Populacional : Carta 2 venceu!");
    }
    if (pibpercapita1 > pibpercapita2)
    {
        printf("\nPib per capita : Carta 1 venceu!");
    } else
    {
        printf("\nPib per capita : Carta 2 venceu!");
    }
}
