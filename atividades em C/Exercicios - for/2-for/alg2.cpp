#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int i;
	float preco,total,pv=0,pp=0,pt=0;
	char cod;
	system("color A");
	
		setlocale(LC_ALL,"portuguese");
	
	printf("Informe o valor das compras e os m�todos de pagamentos: \n ");
		for(i=1; i<=5 ; i++)
		{
			printf("\nInforme o [%d�] pre�o: ",i);
			scanf("%f", &preco);
			printf("M�todo de pagamento [v] ou [p]: ");
			cod = getche();
			
			if(cod == 'v' || cod == 'V')
			{
				pv=pv+preco;
			}
			else if(cod == 'p' || cod == 'p')
			{
				pp=pp+preco;
			}
			total = total + preco;
				
				
		}
			system("cls"); 
	
			printf("\n Total de Pre�os a vista: [%.2fR$]",pv);
			printf("\n Total de Pre�os a prazo: [%.2fR$]",pp);
			printf("\n Total de Pre�os : [%.2fR$]",total);
			
	
}
