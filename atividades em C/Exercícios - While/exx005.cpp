#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int sn,banco;

    printf("Crie uma senha de 4 digitos: ");
    scanf("%d", &sn);
    
    system("cls");
    printf("\t\t\t\t\t[BANCO]\n\n");

    printf("digite a senha para acessar: ");
    scanf("%d", &banco);

    
    while(sn!=banco)
    {

         printf("\nsenha incorreta!!!\n");
         printf("digite a senha para acessar: ");
         scanf("%d", &banco);
    }
      if(sn==banco)
        {
        printf("senha correta!!!");
        }

}