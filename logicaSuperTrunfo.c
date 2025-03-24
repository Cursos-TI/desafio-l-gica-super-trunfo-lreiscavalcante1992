#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[2], cidade1[20], codigo1[4];
    int populacao1, pturistico1, escolhaCarta1,resultado1;  // acrescentei uma variável inteira "escolhaCarta1, escolhaCarta2, resultado1, reultado2"
    float area1, pib1, densidadepopulacional1, pibpercapita1;
    
    char estado2[2], cidade2[20], codigo2[4];
    int populacao2, pturistico2, escolhaCarta2,resultado2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;
    
   
    printf("\nCarta 1: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado1);
    getchar();  // To consume the leftover newline character

    printf("\nDigite o Código: ");
    scanf("%s", codigo1);
    getchar();  // To consume the leftover newline character

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade1);
    getchar();  // To consume the leftover newline character

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao1);

    printf("\nDigite a Área: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1; 

    printf("\nCarta 2: ");
    printf("\nDigite a UF do Estado: ");
    scanf("%s", estado2);
    getchar();  // To consume the leftover newline character

    printf("\nDigite o Código: ");
    scanf("%s", codigo2);
    getchar();  // To consume the leftover newline character

    printf("\nDigite o nome da Cidade: ");
    scanf("%s", cidade2);
    getchar();  // To consume the leftover newline character

    printf("\nDigite a quantidade de População: ");
    scanf("%d", &populacao2);

    printf("\nDigite a Área: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2; 

    printf("\n\nCarta 1: ");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %f km²", area1);  // Proper float formatting
    printf("\nPIB: %f de reais", pib1);  // Proper float formatting
    printf("\nNúmero de Pontos Turísticos: %d", pturistico1);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional1);
    printf("\nPib per Capita é: %f", pibpercapita1);

    printf("\n\nCarta 2: ");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f km²", area2);  // Proper float formatting
    printf("\nPIB: %f de reais", pib2);  // Proper float formatting
    printf("\nNúmero de Pontos Turísticos: %d\n", pturistico2);
    printf("\nDensidade Populacional: %f hab/km²", densidadepopulacional2);
    printf("\nPib per Capita é: %f", pibpercapita2);

    srand(time(0));


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
        resultado1 = populacao1 > populacao2 ? 1 : 0; //variavel resultado1 para marcar a primeira rodada

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
        resultado1 = area1 > area2 ? 1 : 0;                
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
        resultado1 = pib1 > pib2 ? 1 : 0;
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
        resultado1 = pturistico1 > pturistico2 ? 1 : 0;
        
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
        resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;

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
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;

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
      // acrescentei mais um menu para iniciar a segunda rodada do jogo
      printf("\n*** Escolha o proximo atributo ***\n");
      printf("\nEscolha uma opção:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos Túristicos\n");
      printf("5. Densidade populacional\n");
      printf("6. Pib per Capita\n");
      scanf("%d", &escolhaCarta2);
  
  // inclui um switch para escolha dos temas das cartas
      switch (escolhaCarta2)
      {    if (escolhaCarta1 == escolhaCarta2) // coloquei este if-else para não ocorrer do jogador repetir o mesmo atributo
        {
            printf("você escolheu o mesmo atributo\n");
        }else
      case 1:
          printf("\nVocê escolheu População\n");
          printf("\n Carta 1 - %s : População %d x %d População : %s - Carta 2\n", cidade1, populacao1, populacao2, cidade2);
          resultado2 = populacao1 > populacao2 ? 1 : 0; // a variavel resultado2 para marcar a segunda rodada     
  
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
          resultado2 = area1 > area2 ? 1 : 0;                 
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
          resultado2 = pib1 > pib2 ? 1 : 0;
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
          resultado2 = pturistico1 > pturistico2 ? 1 : 0;
          
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
          resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;

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
          resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;


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
      if (resultado1 && resultado2)  //no final if-else para comparar as 2 rodadas e definir o vencedor do jogo
      {
          printf("Parabéns, você venceu\n");
  
      }else if (resultado1 != resultado2)
      {
          printf("empatou\n");
      }else
      {
           printf("Você perdeu\n");
      }
    
    return 0;
}
