#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int idades;
	int maiores18=0;
	int i;
	system ("color A");

		for(i= 0; i<10;i++)
		{
			printf("Digie a %d idade: ",i);
			scanf("%d", &idades);
			
			if (idades > 18)
			maiores18++;
		
		}
			system("cls");
	
	
		printf("maiores que 18: [%d] Idades ",maiores18);
		
}
