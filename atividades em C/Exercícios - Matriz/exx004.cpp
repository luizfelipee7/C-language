#include <stdio.h>

int main()
{
	int matriz[3][3];
	int somaA=0,somaB=0,somaC=0;
    int l,c;
printf("Digite os valores:\n ");
        for(l=0;l<3;l++)
        {
            for(c=0;c<3;c++)
            {
                printf("linha e coluna: [%d][%d]",l+1,c+1);
                scanf("%d",&matriz[l][c]);
            }
        }
		printf("\n");
        
        
            for(c=0;c<3;c++)
            {
       
               somaA+=((matriz[0][0]+matriz[1][0])+matriz[2][0]);
               printf("%d ",somaA);
               somaB+=((matriz[0][1]+matriz[1][1])+matriz[2][1]);
               printf("%d ",somaB);
               somaC+=((matriz[0][2]+matriz[1][2])+matriz[2][2]);
               printf("%d ",somaC);
               return 0;

               
               
            }
            printf("\n");
           
        
        
}
