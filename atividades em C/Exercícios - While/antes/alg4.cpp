#include <stdio.h>





int main()
{
	int i=0,notas;
	float media;
	
	printf("digite as notas 15 notas \n");
	
	while(i<=10)
	{
	
	scanf("%d",&notas);
	
	media += notas;
	i++;
	}
		

printf("a media das notas são %f \n",media/10);
}
