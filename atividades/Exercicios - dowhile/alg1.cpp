#include <stdio.h>

main()
{
	
	int n,par=0,impar=0,tpar=0,timpar=0,total=0,y=0;
	float mpar,mimpar,mtotal;
	
	printf("Digite os valores: \n");
	
	do
	{
		scanf("%d",&n);
		if(n!=0)
		{
			if((n%2)==0 )
			{
				par++;
				tpar+=n;
			}
			else if(n%2!=0)
			{
				impar++;
				timpar+=n;
			}	
			
			y++;
			total+=n;
		}
		
	
	}while(n!=0);
	
	mpar=tpar/par;
	
	if (impar > 0 )
		mimpar=timpar/impar;
		
	mtotal=total/y;
	
	
	printf("quantidade de pares digitados: %d\n",par);
	printf("media: %.2f\n",mpar);
	
	printf("quantidades de impares digitados: %d\n",impar);
	if (impar > 0 )
		printf("media: %.2f\n",mimpar);
	
	printf("total dos numeros  digitatos: %.2f\n",mtotal);
		
}
