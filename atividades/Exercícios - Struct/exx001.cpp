#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
int main() {
  
  struct dados{
  
   int n1,n2;
   int  multi,  subt, expone, soma;
   float raiz, divi;
    } ;
    struct dados dd;
    
    printf("digite o numero 1: ");
    scanf("%d", &dd.n1);
    printf("digite o numero 2: ");
    scanf("%d", &dd.n2);
    
	   dd.soma = dd.n1 + dd.n2;
      dd.multi = dd.n1 * dd.n2;
       dd.divi = dd.n1 / dd.n2;
         dd.subt = dd.n1 - dd.n2;
          dd.raiz =  sqrt(dd.soma);
           dd.expone = pow(dd.soma,4);
     
     printf("soma: %d \n", dd.soma);
      printf("subtracao: %d \n", dd.subt);
       printf("multiplicacao: %d \n", dd.multi);
        printf("divi: %.2f: \n", dd.divi);
         printf("raiz: %.2f: \n", dd.raiz);
          printf("exponecial: %d: \n", dd.expone);
      
}
