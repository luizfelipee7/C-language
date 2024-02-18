#include <stdio.h>

int main()
{
    int i, j, inicio, fim, soma = 0, qtd = 0;

    printf("DIGITE UM NUMERO INICIAL: ");
    scanf("%d", &inicio);
    printf("DIGITE UM NUMERO FINAL: ");
    scanf("%d", &fim);

    for (i = inicio; i <= fim; i++)
    {
        soma = 0;
        for (j = 1; j < i; j++)
        {
            if ((i % j) == 0)
                soma += j;
        }
        if (i == soma)
            qtd++;
    }
    printf("\n\nNESTE INTERVALO EXISTEM %d NUMEROS PERFEITOS\n\n", qtd);
}
