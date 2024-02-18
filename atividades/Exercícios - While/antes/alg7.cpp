#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main()
{
    
    setlocale(LC_ALL,"portuguese");
    system("color A");
     int maior=0;
    int numeros;
    int i=1;
    
    printf("\ndigite os 5 numeros\n ");
    
    while (i<=5)
    {
    	scanf("%d", &numeros);
    	if (numeros>maior)
    	{
    		maior=numeros;
		}
		i++;
	
	}
	printf("O maior numero é %d",maior);
    
}
    
    
