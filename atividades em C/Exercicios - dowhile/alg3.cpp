#include <stdio.h>

main()
{
	int n,y=0;
	
	printf("Digite os valores\n ");
	
	do
	{
		scanf("%d",&n);
		
		if(n>=0)
		
		y+=n;
	
			
		
	}while(n>=0);
	
	printf("a soma dos valores digitados eh: %d ", y);

	
}
