#include <stdio.h>

int main()
{
		int mes, ano;
		
		
	
	printf("\n(1)-Janeiro");
	printf("\n(2)-Fevereiro");
	printf("\n(3)-Marco");
	printf("\n(4)-Abril");
	printf("\n(5)-Maio");
	printf("\n(7)-Junho");
	printf("\n(8)-Julho");
	printf("\n(9)-Agosto");
	printf("\n(10)-Setembro");
	printf("\n(11)-Novembro");
	printf("\n(12)-Dezembro");
	
	printf("\nescolha o mes: ");
	scanf("%d", &mes);

	
	printf("digite o ano: ");
		scanf("%d", &ano);
			
		if(ano%4 == 0)
		{
			printf("\nano bisexto\n");
			
			switch(mes)
			{
				case 1:
					printf("o mes de janeiro tem 31 dias");
				break;
				
				case 2:
				printf("o mes de fevereio tem 29 dias");
				break;
				
				case 3:
					printf("o mes de Marco tem 31 dias ");
				break;
				
				case 4:
					printf("o mes de Abril tem 30 dias ");
				break;
				
				case 5:
					printf("o mes de Maio tem 31 dias ");
				break;
				
				case 6:
					printf("o mes de Junho tem 30 dias ");
				break;
				
				case 7:
					printf("o mes de Julho tem 31 dias ");
				break;
				
				case 8:
					printf("o mes de Agosto tem 31 dias ");
				break;
				
				case  9:
					printf("o mes de Setembro tem 30 dias ");
				break;
				
				case 10:
					printf("o mes de Outubro tem 31 dias ");
				break;
				
				case 11:
					printf("o mes de Novembro tem 30 dias ");
				break;
				
				case 12:
					printf("o mes de Desembro tem 31 dias ");
				break;
			
			}
		return 0;
		}
		else 
		{
			printf("\nano nao eh bisexto\n");	
		}
		
	

	
		
			
		switch(mes)
		{
			case 1:
				printf("o mes de janeiro tem 31 dias");
			break;
			
			case 2:
			printf("o mes de fevereio tem 28 dias");
			break;
			
			case 3:
				printf("o mes de Marco tem 31 dias ");
			break;
			
			case 4:
				printf("o mes de Abril tem 30 dias ");
			break;
			
			case 5:
				printf("o mes de Maio tem 31 dias ");
			break;
			
			case 6:
				printf("o mes de Junho tem 30 dias ");
			break;
			
			case 7:
				printf("o mes de Julho tem 31 dias ");
			break;
			
			case 8:
				printf("o mes de Agosto tem 31 dias ");
			break;
			
			case  9:
				printf("o mes de Setembro tem 30 dias ");
			break;
			
			case 10:
				printf("o mes de Outubro tem 31 dias ");
			break;
			
			case 11:
				printf("o mes de Novembro tem 30 dias ");
			break;
			
			case 12:
				printf("o mes de Desembro tem 31 dias ");
			break;
		
			}
			
	
}
