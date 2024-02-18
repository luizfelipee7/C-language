#include <stdio.h>

int valor(char nm[]){
		int qtd=0;
		int i=0;

while(nm[i]!='\0')
{

	qtd++;
	i++;
}

return qtd;
}

int main()
{

char nm[20];

	
	printf("digite um nome: \n ");
	scanf("%s",nm);
	printf("%d\n",valor(nm));
}
	
