#include <stdio.h>

int main()
{
	int matrizA[3][3];
	int matrizB[3][3];
    int r[3][3];
    int aux=0;

    int l,c,g,b,x;
printf("Digite os valores de A:\n\n");

        for(l=0;l<3;l++)
        {
            for(c=0;c<3;c++)
            {
                printf("linha e coluna: [%d][%d] ",l+1,c+1);
                scanf("%d",&matrizA[l][c]);
            }
        }
        
        printf("\nDigite os valores de B:\n ");
        for(l=0;l<3;l++)
        {
            for(c=0;c<3;c++)
            {
                printf("linha e coluna: [%d][%d]",l+1,c+1);
                scanf("%d",&matrizB[l][c]);
            }
        }
			
		printf("\n");
        
       for(l = 0; l < 3; l++) {
		for(c = 0; c < 3; c++) {
			
			r[l][c] = 0;
			for(x = 0; x < 3; x++) {
				aux +=  matrizA[l][x] * matrizB[x][c];
			}

			r[l][c] = aux;
			aux = 0;
		}
	}
	
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 3; c++) {
			printf("%d ", r[l][c]);
		}
		printf("\n\n");
	}
	printf("\n\n");
           
}
        

