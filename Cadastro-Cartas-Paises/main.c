#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pontos_turi1, pontos_turi2;
    float area1, area2, pib1, pib2, pibcapi1,pibcapi2, densidade_popu1,
    densidade_popu2, densidade_inver1, densidade_inver2, super1, super2;
    unsigned long int populacao1, populacao2;
    char pais1[50], pais2[50];
    printf("//////////////////////////////////////////////// \n           Cadastro de Cartas Países \n//////////////////////////////////////////////// \n");

    printf("Digite o nome do País 1: \n");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("Digite a área de %s: \n", pais1);
    scanf("%f", &area1);

    printf("Digite a população de %s: \n", pais1);
    scanf("%d", &populacao1);

    printf("Digite o PIB de %s: \n", pais1);
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem %s? \n", pais1);
    scanf("%d", &pontos_turi1);

    densidade_popu1 = (float) populacao1 / area1;

    pibcapi1 = pib1 / (float) populacao1;

    densidade_inver1 = 1 / densidade_popu1;

    getchar();

    printf("Digite o nome do País 2: \n");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite a área de %s: \n", pais2);
    scanf("%f", &area2);

    printf("Digite a população de %s: \n", pais2);
    scanf("%d", &populacao2);

    printf("Digite o PIB de %s: \n", pais2);
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem %s? \n", pais2);
    scanf("%d", &pontos_turi2);

    densidade_popu2 = (float) populacao2 / area2;

    pibcapi2 = pib2 / (float) populacao2;

    densidade_inver2 = 1 / densidade_popu2;

    super1 = area1 + densidade_popu1 + densidade_inver1 + pib1 + pibcapi1 + populacao1 + pontos_turi1;
    super2 = area2 + densidade_popu2 + densidade_inver2 + pib2 + pibcapi2 + populacao2 + pontos_turi2;



    return 0;
}
