#include <stdio.h>

int main()
{
	int matriz[6][6];
    int l,c,maior=0;
printf("Digite os valores:\n ");
        for(l=0;l<6;l++)
        {
            for(c=0;c<6;c++)
            {
                printf("linha e coluna: [%d][%d]",l+1,c+1);
                scanf("%d",&matriz[l][c]);
            }
        }
		printf("\n");
        for(l=0;l<6;l++)
        {
            for(c=0;c<6;c++)
            {
               if(matriz[l][c]>10)
               
                maior++;
            }
            printf("\n");
           
        }
          for(c=0;c<6;c++)
            {
               
                printf("maiores %d\n ",maior);
                
            }
       
}
