
#include <stdio.h>

int main()
{
    int x,y,somapar=0,multiimpar=1;
   
        printf("Escolha o 1 numero: ");
        scanf("%d", &x);
        printf("Escolha o 2 numero: ");
        scanf("%d", &y);

     while(x<=y)
     {
        if(x % 2 ==0)
        {
          
        somapar = somapar + x;
      
        }
        else
     
        multiimpar = multiimpar * x;
        
        x++;

     }
      printf("\na soma dos numeros pares digitados eh: %d",somapar);
        printf("\na multiplicacao dos numeros impares digitados eh: %d",multiimpar);
} 
