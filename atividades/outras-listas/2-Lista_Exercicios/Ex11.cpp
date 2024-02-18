#include <stdio.h>

int main()
{
    int numero, aux = 0;
    float soma = 0, media;

    printf("Insira os numeros: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        soma += numero;
        aux++;
        scanf("%d", &numero);
    }
    media = soma / aux;

    printf("\nMedia eh: %.2f\n\n", media);
}
