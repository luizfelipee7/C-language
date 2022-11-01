#include <stdio.h>

int valor(char nm[20]){
		int qtd=0;
	for(int i = 0; i<20; i++){
		if(nm[i]){
				qtd++;
		}
	}
	return qtd;
}

int main()
{

char nm[20];
	
	printf("digite um nome: \n ");
	scanf("%s",&nm);
	printf("%d\n",valor(nm));
}
	
