#include <stdio.h>

main()
{
	
int i,n[5],soma=0;

printf("digite os valores \n");
for(i=0;i<5;i++)
{
scanf("%d", &n[i]);

soma+=n[i];
}
	
	printf("Soma dos numeros digitados eh: %d",soma);
}