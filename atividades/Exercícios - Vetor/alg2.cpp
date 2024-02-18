#include <stdio.h>

int main()
{
	int n[10],menor,igual,i,ref,cont;
	
		printf("digite o valor referencia: ");
		scanf("%d", &ref);
		
			printf("digite 10 numeros: \n");
			for(i=1;i<=10;i++)
			{
				scanf("%d", &n[i]);
						
					if(n[i]>ref)
					{
						cont++;
					}
					else if (n[i]<ref)
					{
						menor++;
					}
					else if (n[i]=ref)
					{
						igual++;
					}
	        }
							printf("\nOs valores maiores que a referencia sao:\n");
							for(i=1; i<10; i++)
							{	
 							if(n[i]>ref)
 							printf("%d\n", n[i]);
						 	}
		
		printf("quantidade menor que a referencia: %d",menor);
		printf("quantidade igual a referencia: %d",igual);
}
