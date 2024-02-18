#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int i,idades;
	int maiores18=0;
	system ("color A");

		for(i = 1; i <= 10 ; i++)
		{
			printf("Digie a %d idade: ",i);
			scanf("%d", &idades);
			
			if (idades > 18)
			maiores18 = maiores18 + 1;
		
		}
			system("cls");
	
		printf("maiores que 18: [%d] Idades ",maiores18);
		
}
