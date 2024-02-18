#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int i;

	float mediasa,mediafl,totalsa,totalfl,pessoa,salario,filho,maior=0,y=0,porcentagem;
	

	system("color A");
	
		setlocale(LC_ALL,"portuguese");
	
	printf("Pesquisa com 200 pessoas : \n ");
		while (i<=5)
		{
			printf("\n[%dº] pessoa:\n ",i);
			printf("sálario R$: ");
			scanf("%f", &salario);
			printf("Numero de Filhos: ");
			scanf("%f", &filho);
			
			totalsa = totalsa + salario;
			totalfl = totalfl + filho;
			
			if(salario > maior)
			{
				maior = salario;
			}
			if(salario > maior && salario!=0)
			{
				maior = salario;
			}
			if(salario<=150)
			{
				y=y+1;
			}
			i++;
		}
			mediasa= totalsa / 5;
			mediafl= totalfl / 5;
			porcentagem= (y*100)/5;
			
			system("cls");
			
			
		printf("\nMédia do salário dessas pessoas: [%.2fR$] ",mediasa);
		printf("\nMédia do número de filhos: [%.2fR$] ",mediafl);
		printf("\nMaior sálario: [%.2fR$] ",maior);
		printf("\npercentagem de pessoas com salários até R$ 150,00: [%.f%%] ",porcentagem);
		
			
}
