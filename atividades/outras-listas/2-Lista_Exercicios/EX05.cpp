#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, raiz;
    float sen1, sen2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("\n");

    printf("Soma: %d\n", n1 + n2);
    printf("Produto do primeiro vezes soma do segundo: %d\n", n1 * (n2 + n2));
    printf("Quadrado do primeiro: %d\n", n1 * n1);

    printf("Raiz da soma dos quadrados: %d\n", n1 + n2);

    if (n1 >= 0)
    {
        printf("Modulo do primeiro: %d\n", n1);
    }
    if (n1 < 0)
    {
        printf("Modulo do primeiro: %d\n", - n1);
    }

    sen1 = sin(n1);
    sen2 = sin(n2);
    printf("Seno e diferenca: %f\n", sen1 - sen2);
}