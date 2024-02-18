#include <stdio.h>
int main()
{

int idade,maior=0,menor=9999,soma=0,y=0;
float media;

while(idade!=0)
{        
   
        printf("digite a %d idade: ", y + 1);
        scanf("%d", &idade);
         
         if(idade!=0)
         {
        
        
		    if(idade>maior)
		    {
		 	maior=idade;
		    }
            if(idade<menor)
		    {
		 	menor=idade;
		    }
           
            y++;
          soma+=idade;

         }
    }
    media=soma;
    
      printf("\nTotal de pessoas: %d",y);
       printf("\nidade media do grupo: %.2f",media/y);
      printf("\nmaior idade: %d",maior);
      printf("\nmenor idade: %d",menor);   
}