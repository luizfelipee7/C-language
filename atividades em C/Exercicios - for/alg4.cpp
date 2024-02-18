#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define max 15

int main()
{
   setlocale(LC_ALL,"portuguese");
    system("color A");
    int notas[max];
    int soma = 0; 
    int i;
    float media;
    

    for(i=0;i<max;i++)
    {
        printf("digite a %d nota: ", i + 1);
        scanf("%d", &notas[i]);
    }
        for(i=0;i<max;i++)
        {
             soma = soma + notas[i]; 
             
        }
        system("cls");
        media = soma / 15;
        printf("média aritimética: %.2f\n ", media);
     

    return 0;
}
