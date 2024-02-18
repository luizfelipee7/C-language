#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
       setlocale(LC_ALL,"portuguese");
    system("color A");
  double base,expoente,i,tot;
  tot=1;
  i=1;

  
     printf("\nCalcular potencia\n ");
     printf("Valor da Base: ");
     scanf("%lf", &base);
     printf("valor do Expoente: ");
     scanf("%lf", &expoente);

    while (i<=expoente)
    {
         tot = tot*base;
         i++;
    }
    
    printf("%.lf elevado a %.lf = %.lf ",base,expoente,tot);

   










}

