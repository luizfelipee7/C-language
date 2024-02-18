#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



#define max 10

int main(){
    setlocale(LC_ALL,"portuguese");
    system("color A");

    int numeros[max];
    int par[max];
    int impar[max];
    int i;
    int cpar = 0;
    int cimpar = 0;


    for(i=0;i<max;i++)
    {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
        for(i=0;i<max;i++)
        {
           if (numeros[i] % 2 == 0)
           {
                 par[cpar] = numeros[i];
                 
           }
           else
           {
                 impar[cimpar] = numeros[i];
                
           }
           system("cls");
        }
          printf("numeros pares:\n ");
          for(i=0;i<cpar;i++)
          {
              printf("%d\n", par[i]);
          }
         
          printf("numeros impares:\n ");
          for(i=0;i<cimpar;i++)
          {
              printf("%d\n", impar[i]);
          }
return 0;
}

 
