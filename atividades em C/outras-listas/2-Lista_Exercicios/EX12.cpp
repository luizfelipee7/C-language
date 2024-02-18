#include <stdio.h>

int main()
{
	int vet[]={2, 4, 35, 50, 23, 17, 9, 12, 27,5};
	int i,maior=0,soma=0,primo,aux;
	float media;
	
		
	for(i=0;i<=8;i++)
	{
		soma+=vet[i];
	
		if(vet[i]>maior)
		{
			maior=vet[i];
		}

	for(int y = i;y<8;y++)
	{
		if(vet[i] > vet[y])
		{
			aux = vet[i];
			vet[i] = vet[y];
			vet[y] = aux;
		}
	}
}
	printf("numeros em ordem crescente\n");
	
	for(int i = 0; i<8; i++)
	{
		printf("%d \n",vet[i]);
	}

	printf("\nmaior: %d",maior);
	printf("\nmedia: %.3f",(float)soma/8);
	printf("\nprimo: %d",primo);
 
}



