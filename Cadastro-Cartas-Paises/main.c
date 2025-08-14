#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pontos_turi1, pontos_turi2, pontuacao1, pontuacao2;
    float area1, area2, pib1, pib2, pibcapi1,pibcapi2, densidade_popu1,
    densidade_popu2, densidade_inver1, densidade_inver2, super1, super2;
    unsigned long int populacao1, populacao2;
    char pais1[50], pais2[50];
    printf("//////////////////////////////////////////////// \n           Cadastro de Cartas Países \n//////////////////////////////////////////////// \n");

    printf("Digite o nome do País 1: \n");
    fgets(pais1, 50, stdin);// Ler o nome do país
    pais1[strcspn(pais1, "\n")] = '\0';// retira o \n que fica armazenado junto com a variavel, assim corrigindo o erro do código ser 'pulado'

    printf("Digite a área de %s: \n", pais1);
    scanf("%f", &area1);

    printf("Digite a população de %s: \n", pais1);
    scanf("%lu", &populacao1);

    printf("Digite o PIB de %s: \n", pais1);
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem %s? \n", pais1);
    scanf("%d", &pontos_turi1);

    densidade_popu1 = (float) populacao1 / area1; //calculo da densidade populacional

    pibcapi1 = pib1 / (float) populacao1; // Pib per Capita
    densidade_inver1 = 1 / densidade_popu1; // densidade invertida

    printf("\nCarta 1: %s \n", pais1);
    printf("Área: %.2f Km² \n", area1);
    printf("População: %d \n", populacao1);
    printf("Densidade Populacional: %.2f hab/Km² \n", densidade_popu1);
    printf("Quantidade de Pontos Turísticos: %d \n", pontos_turi1);
    printf("PIB: R$%.2f \n", pib1);
    printf("PIB per Capita: R$%.2f \n", pibcapi1);

    getchar();

    printf("\nDigite o nome do País 2: \n");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite a área de %s: \n", pais2);
    scanf("%f", &area2);

    printf("Digite a população de %s: \n", pais2);
    scanf("%lu", &populacao2);

    printf("Digite o PIB de %s: \n", pais2);
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem %s? \n", pais2);
    scanf("%d", &pontos_turi2);

    densidade_popu2 = (float) populacao2 / area2;

    pibcapi2 = pib2 / (float) populacao2;

    densidade_inver2 = 1 / densidade_popu2;

    printf("\nCarta 2: %s \n", pais2);
    printf("Área: %.2f Km² \n", area2);
    printf("População: %d \n", populacao2);
    printf("Densidade Populacional: %.2f hab/Km² \n", densidade_popu2);
    printf("Quantidade de Pontos Turísticos: %d \n", pontos_turi2);
    printf("PIB: R$%.2f \n", pib2);
    printf("PIB per Capita: R$%.2f \n", pibcapi2);

    super1 = area1 + densidade_popu1 + densidade_inver1 + pib1 + pibcapi1 + populacao1 + pontos_turi1;
    super2 = area2 + densidade_popu2 + densidade_inver2 + pib2 + pibcapi2 + populacao2 + pontos_turi2;

    pontuacao1 = 0;
    pontuacao2 = 0;


    printf("\nComparação de Países: \n");

    if (area1 > area2) {
        ++pontuacao1;
        printf("Área: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("Área: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (populacao1 > populacao2) {
        ++pontuacao1;
        printf("População: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("População: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (densidade_popu1 < densidade_popu2) {
        ++pontuacao1;
        printf("Densindade Populacional: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("Densindade Populacional: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (pontos_turi1 > pontos_turi2) {
        ++pontuacao1;
        printf("Pontos Turísticos: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("Pontos Turísticos: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (pib1 > pib2) {
        ++pontuacao1;
        printf("PIB: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("PIB: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (pibcapi1 > pibcapi2) {
        ++pontuacao1;
        printf("PIB Per Capita: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("PIB Per Capita: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }

    if (super1 > super2) {
        ++pontuacao1;
        printf("Super Poder: %s ganha. %s %d X %d %s\n", pais1, pais1, pontuacao1, pontuacao2, pais2);
    } else{
        ++pontuacao2;
        printf("Super Poder: %s ganha. %s %d X %d %s\n", pais2, pais1, pontuacao1, pontuacao2, pais2);
    }




    return 0;
}
