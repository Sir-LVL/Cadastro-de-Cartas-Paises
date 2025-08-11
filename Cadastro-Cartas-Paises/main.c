#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int populacao1, populacao2, pontos_turi1, pontos_turi2;
    float area1, area2, pib1, pib2;
    char pais1[50], pais2[50];
    printf("//////////////////////////////////////////////// \n           Cadastro de Cartas Países \n//////////////////////////////////////////////// \n");
    printf("Digite o nome do País 1: \n");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = '\0';
    printf("Digite o nome do País 2: \n");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = '\0';
    printf("Digite a área de %s: \n", pais1);
    scanf("%f", area1);

    return 0;
}
