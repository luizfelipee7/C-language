#include <stdio.h>
int valor(int n)  
{
return n>0 ? 1 : 0;
}

int main(){
	
	int matriz[4][4];
    int l,c,vet[16];
    int f=0;
  
    
    
printf("Digite os valores:\n ");
        for(l=0;l<4;l++)
        {
            for(c=0;c<4;c++)
            {
                printf("linha e coluna: [%d][%d] ",l+1,c+1);
                scanf("%d",&matriz[l][c]);
                
                if(valor(matriz[l][c]) == 0)
                {
                vet[f]=matriz[l][c];
                f++;
				}
            }
       
        }
        printf("negativos digitados: ");
          for(int i=0;i<f;i++)
          {
          	printf("%d\n", vet[i]);
		  }
		   
}