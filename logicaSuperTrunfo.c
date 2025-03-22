#include <stdio.h>

int main() {
    //incluindo variavei da carta 1
    char estado1[2], cidade1[20], codigo1[4];
    int populacao1, pturistico1, escolhaCarta1;  // acrescentei uma variável inteira "escolhaCarta1"
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

    // acrescentei um menu para iniciar o jogo
    printf("\n*** Jogo Super Trunfo ***\n");
    printf("\nEscolha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Túristicos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per Capita\n");
    scanf("%d", &escolhaCarta1);

// inclui um switch para escolha dos temas das cartas
    switch (escolhaCarta1)
    {
    case 1:
        printf("\nVocê escolheu População\n");
        printf("\n Carta 1 - %s : População %d x %d População : %s - Carta 2\n", cidade1, populacao1, populacao2, cidade2);
// coloquei if, else-if e else para comparação de cada case 
        if (populacao1 > populacao2)
        {           
            printf("\nPopulação : Carta 1 venceu!");
        } else if (populacao1 < populacao2)
        {
            printf("\nPopulação : Carta 2 venceu!");
        }
        else
        {
            printf("\nPopulação : Empatou!");
        }
        
        break;

        case 2:
        printf("\nVocê escolheu Área\n");
        printf("\n Carta 1 - %s : Area %.2f km² x %.2f km² Área : %s - Carta 2\n", cidade1, area1, area2, cidade2);
                         
        if (area1 > area2)
        {          
            printf("\nArea : Carta 1 venceu!");
        } else if (area1 < area2)
        {
            printf("\nArea : Carta 2 venceu!");
        }   
        else
        {
            printf("\nArea : Empatou!");
        }
        break;

        case 3:
        printf("\nVocê escolheu Pib\n");

        printf("\n Carta 1 - %s : Pib R$ %.2f x R$ %.2f Pib : %s - Carta 2\n", cidade1, pib1, pib2, cidade2);
        if (pib1 > pib2)
        {
            printf("\nPIB : Carta 1 venceu!\n");
        } else if (pib1 < pib2)
        {
            printf("\nPib : Carta 2 Venceu\n");
        }else
        {
            printf("\nPib: Empatou\n");
        }          
        break;
        case 4:
        printf("\nVocê escolheu Pontos Turísticos\n");

        printf("\n Carta 1 - %s : Pontos Túristicos %d x %d Pontos Túristicos : %s - Carta 2\n", cidade1, pturistico1, pturistico2, cidade2);
        if (pturistico1 > pturistico2)
        {
            printf("\nPontos Turítico : Carta 1 venceu!\n");
        } else if (pturistico1 < pturistico2)
        {
            printf("\nPontos Turístico : Carta 2 Venceu\n");
        }else
        {
            printf("\nPontos Turístico: Empatou\n");
        }
        case 5:
        printf("\nVocê escolheu Densidade Populacional\n");

        printf("\n Carta 1 - %s : Densidade Populacional %f x %f Densidade Populacional : %s - Carta 2\n", cidade1, densidadepopulacional1, densidadepopulacional2, cidade2);
        
        if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("\nDensidade Populacional : Carta 1 venceu!");
    } else if (densidadepopulacional1 > densidadepopulacional2)
    {
        printf("\nDensidade Populacional : Carta 2 venceu!");
    } else
    {
        printf("\nDensidade Populacional : Empatou");
    }
    
    case 6:
        printf("\nVocê escolheu Pib per Capita\n");

        printf("\n Carta 1 - %s : Pib per Capita R$ %.2f x R$ %.2f Pib Per Capita : %s - Carta 2\n", cidade1, pibpercapita1, pibpercapita2, cidade2);
        
        if (pibpercapita1 > pibpercapita2)
        {
            printf("\nPib per capita : Carta 1 venceu!");
        }else if (pibpercapita1 < pibpercapita2)
        {
            printf("\nPib per capita : Carta 2 venceu!");
        } else
        {
            printf("\nPib per capita : Empatou");
        }   
    default:
    printf("\n opção inválida\n");
        break;
    } 
    
    return 0;
}