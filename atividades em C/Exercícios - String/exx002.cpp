#include <string.h>
#include <stdio.h>

char func(char *palavra)
{
	int i=0;
	int tam=0;

	
	do
	{
		if(palavra[i])
		{
			tam++;
		}
		
		i++;
	}while(palavra[i]);
	return tam;
}
	




int main(void)  
{
	char palavra[20];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	printf("tamanho da funcao: %d", func(palavra));

}
