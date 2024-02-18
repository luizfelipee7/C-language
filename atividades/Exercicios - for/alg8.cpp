#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    
    setlocale(LC_ALL,"portuguese");
    system("color A");

    int i,num;
    int n1 = 0, n2= 1;
    int pt;

    printf("informe a quantidade de termo: ");
    scanf("%d", &num);
    printf("\nSequ�ncia de Fibonacci:\n");
    
    for(i=1; i<=num ; i++)
    {
        printf("%d, ",n1);
        pt = n1 + n2;
        n1 = n2;
        n2 = pt;
    }

     return 0;

}
