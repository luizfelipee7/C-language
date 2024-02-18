#include <string.h>
#include <stdio.h>






int main(void)  
{
	char palavra[20];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	if((palavra[0]=='a' || palavra[0]== 'A' ))
	{
		printf("palavra eh: %s",palavra);
	}
	else
	{
		printf("vazio");
	}
	

}
