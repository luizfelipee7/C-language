#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,j,n;
	system ("color A");
	printf("Digite o Valor de [*]");
	scanf("%d", &n);
	
	
	for(i - 1 ; i <=n ; i++)
	{
		for(j=n-i; j >=1 ; j--)
		printf(" ");
		
		for(j=n-i; j <= i ; j++)
		printf("*");
		printf(" ");
		
		for(j=n-i; j <= i ; j++)
		printf(" ");
		printf("\n");
			
	}
	
		
}
