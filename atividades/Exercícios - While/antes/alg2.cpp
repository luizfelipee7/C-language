#include <stdio.h>




int main()
{
int idades, i=1;
float tot=0;


printf("digite as idades:\n");

	while(i<=5)
	{
	scanf("%d", &idades);

	tot += idades;
	i++;
	
	}

printf("Maior idade eh: %f",tot/5);
	
		
	
	
	
}
