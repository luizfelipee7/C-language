#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 10

int main()
{
    setlocale(LC_ALL,"portuguese");
    system("color A");
    int i;
    int numeros[max];

    for(i=0;i<max;i++)
    {
    printf("Digite o %d numero ", i + 1);
    scanf("%d", &numeros[i]);
    }
    
    system("cls");

    for(i=0;i<max;i++)
    {
       if(numeros[i]>10 && numeros[i]<20) 
       {
       printf("\nestá no intervalo: %d\n ", numeros[i]);
       }
        else 
        {
        printf("\nnão está no intervalo: %d\n ", numeros[i]);
        }
    }
}
    










