#include <string.h>
#include <stdio.h>

int main(void)  
{
	char palavra[20];
	int i=0;
	
	printf("Digite uma palavra: ");
    scanf("%s", palavra);
	
	for(i=0;i<4;i++)
	{
	 
	printf("%c",palavra[i]);
	}
 
 
}
