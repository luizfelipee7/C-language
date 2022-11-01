#include <string.h>
#include <stdio.h>
#include <stdbool.h>


main()  
{
char palavra[20];
 
bool palin = true;

printf("digite o nome: ");
scanf("%s", palavra);

int tam = strlen(palavra);

for(int i=0; i<=tam/2;i++)
{
	palin = palin && (palavra[i] == palavra[(tam-1)-i]);
}


if(palin)
{
	printf("\n eh palidromo");
	
}
else
{
	printf("\n Nao eh palidromo");
}

}
