#include <stdio.h>

main()
{
	
int i,n[10],ref,aux,j;

printf("digite o valor referencia: ");
scanf("%d", &ref);
printf("digite os valores: \n");

  for(i=0;i<10;i++)
  {
    scanf("%d", &n[i]);

        
  }
  printf("numeros maiores que o valor referencia:\n");
  for(i=0;i<10;i++)
  {
	if(n[i]>ref)
    {
    
        printf("%d\n",n[i]);
    }
  }
  printf("numeros menores que o valor referencia:\n");
  for(i=0;i<10;i++)
  {
    if(n[i]<ref)
    {
        
        printf("%d\n",n[i]);
    }
  }
  printf("Valor referencia repetido:\n");
    for (i = 0; i < 10; i++) 
    {
      
            if (n[i] == ref) 
            {
                printf("%d\n",n[i]);
            }
    }
            
}
	

               
