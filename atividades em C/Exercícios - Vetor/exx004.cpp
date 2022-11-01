#include <stdio.h>

main()
{
	
	int i,a[5],b[5],soma=0;
	
	printf("Digite os valores de A:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d", &a[i]);
	}
		printf("Digite os valores de B:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d", &b[i]);
	}
	for(i=0;i<=4;i++)
	{
	
	soma+= (a[i] + b[4-i]);
	}
	
	
	printf("somatorio: %d",soma);
	
	
}
