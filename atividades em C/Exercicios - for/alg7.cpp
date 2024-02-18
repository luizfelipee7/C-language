#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define max 5

int main()
{
    
    setlocale(LC_ALL,"portuguese");
    system("color A");
    int maior=0;
    int num[max];
    int i;

     for(i=0;i<max;i++)
     {
        printf("digite o %d numero: ",i +1);
        scanf("%d", &num[i]);
     }
     system("cls");

    for(i=0;i<max;i++)
    {
        if(num[i]>maior)
        {
        maior=num[i];
        }
    }
    printf("O maior numero é %d",maior);
}
