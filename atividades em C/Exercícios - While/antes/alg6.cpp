#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
       setlocale(LC_ALL,"portuguese");
    system("color A");
  int base,expoente,i,tot;
  tot=1;
  i=1;

  
     printf("\nCalcular potencia\n ");
     printf("Valor da Base: ");
     scanf("%d", &base);
     printf("valor do Expoente: ");
     scanf("%d", &expoente);

    while (i<=expoente)
    {
         tot = tot*base;
         i++;
    }
    
    printf("%d elevado a %d = %d ",base,expoente,tot);
    
}
