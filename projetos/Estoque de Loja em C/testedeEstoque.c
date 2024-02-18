#include <stdio.h>

int main()
{
    FILE *estoque;
    char nomes[100];
    int quantidade = 5;

    estoque = fopen("teste.txt", "r+");

    if (estoque == NULL)
    {
        estoque = fopen("teste.txt", "a+");
    }

    rewind(estoque);

    while (fscanf(estoque, "%s", nomes) == 1)
    {
        printf("\n%s\t%d", nomes, quantidade);
    }

    printf("\nADICIONE O PRODUTO\n");
    scanf("%s", nomes);
    fprintf(estoque, nomes);
}