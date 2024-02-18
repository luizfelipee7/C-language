#include <stdio.h>


int main()
{
	int i=1, idades,idades18=0;
	

	
	while(i<=10)
	{
	printf("digite a %d idade: ",i);
	scanf("%d", &idades);
	
	if(idades > 18)
	idades18 = idades18 + 1;
	i++;
	}
	
		printf("maiores que 18: [%d] Idades ",idades18);
	
	
	
	
	
	
}
