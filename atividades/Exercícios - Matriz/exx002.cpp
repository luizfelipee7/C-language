#include <stdio.h>

int main()
{
	int matriz[3][3];
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
        for(l=0;l<3;l++)
        {
            for(c=0;c<3;c++)
            {
               if(matriz[l][c]%2==0)
                printf("+1 ",matriz[l][c]);
                else
                   printf("-1 ",matriz[l][c]);
            }
            printf("\n");
           
        }
        
}
