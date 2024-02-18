#include <stdio.h>


main()
{
	int num;
	
	printf ("escolha a opção desejada\n");
	printf("{1} = Fornecedores\n");
	printf("{2} = Clientes\n");
	printf("{3} = Encomendas\n");
	printf("{4} = sair\n");
	scanf("%d",&num);
	do
	{
	
		switch(num)
		{
		case 1:
		printf("lendo fornecedores...");
		break;
		case 2:
		printf("lendo Clientes...");
		break;
		case 3:
		printf("lendo Encomendas...");
		break;
		case 4:
		printf("saindo...");
		break;
		}
	}while(num<0);
}
