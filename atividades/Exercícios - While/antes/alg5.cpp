
#include <stdio.h>




int main()
{
	int i=1,numeros,dentro=0,fora=0;
	
	printf("digite 10 numeros\n");
	
	while (i<=10)
	{
		scanf("%d", &numeros);
		 if(numeros>=10 && numeros<=20) 
       {
       	dentro+=1;
       
       }
        else 
        {
        fora+=1;
        }
        i++;
        
	}
	 printf("\nesta no intervalo: %d\n ", dentro);
	 printf("\nnao esta no intervalo: %d\n ", fora);
	
	
	
}
