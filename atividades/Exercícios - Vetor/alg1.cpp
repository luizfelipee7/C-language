#include <stdio.h>

int main()
{
	int i,n[10];
	printf("digite os valores:\n");
	
		for(i=1;i<=10;i++)
		{	
			printf("%d-", i);
			scanf("%d", &n[i]);
		}
			printf("\nordem reversa: \n");
				for(i=10;i>=1;i--)
				{
					printf("\n %d-%d",i,n[i]);
				}
			
}
