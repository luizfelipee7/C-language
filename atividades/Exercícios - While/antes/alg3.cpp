#include <stdio.h>
#include <stdlib.h>
#include <locale.h>





int main(){
	
	int par=0,impar=0,i=1,n;
    setlocale(LC_ALL,"portuguese");
    system("color A");
    
    printf("digite 10 numero\n");
    
    while(i<=10)
	{
		scanf("%d",&n);
		 
		 	if (n % 2 == 0)
			{
			  par++;
            
			}
            else 
            {
              impar++;
            		
			}
          i++;       
	}
    printf("numeros pares %d \n",par);
    printf("numeros impares %d \n",impar);
}
    
    
    
