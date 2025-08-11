#include <stdio.h>
#include <stdlib.h>

int main()
{
    int populacao1, populacao2, pontos_turi1, pontos_turi2;
    float area1, area2, pib1, pib2;
    char pais1, pais2;
    printf("//////////////////////////////////////////////// \n           Cadastro de Cartas Países \n//////////////////////////////////////////////// \n");
    printf("Digite o nome do País 1: \n");
    scanf(" %s ", &pais1);
    getchar();
    printf("Digite o nome do País 2: \n");
    scanf(" %s ", &pais2);
    getchar();
    printf("Digite a área de %c: \n", pais1);
    scanf(" %d ", area1);

    return 0;
}
