#include <stdio.h>

int main()
{

    int numero, i, aux;

    printf("Informe a tabuada que vc deseja: ");
    scanf("%d", &numero);
    printf("\n");

    if (numero < 10)
    {
        for (i = 1; i <= 10; i++)
        {
            aux = numero * i;
            printf("%d X %d = %d", numero, i, aux);
            printf("\n");
        }
    }
    if (numero >= 10)
    {
        printf("Tabuada invalida");
    }
    if (numero <= 0)
    {
        printf("Tabuada invalida");
    }
    
}
