/*
nome: luiz felipe
fun��o: calculadora
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,o ;

	printf("escolha sua opera��o (1) (2) (3) (4)\n");
	
	printf("1 - soma\n2 - subtra��o\n3 - Multiplica��o\n4 - Divis�o\n");
	scanf ("%d", &o);
	
	printf("valor 1: ");
	scanf("%d", &n1);
	
	printf("valor 2: ");
	scanf("%d", &n2);
	
	switch(o){
		case 1:
		printf("resultado da soma: %d ", n1 + n2);
		break;
		case 2:
		printf("resultado da subtra��o: %d ", n1 - n2);
		break; 
		case 3:
		printf("Resultado da multiplica��o: %d ", n1 * n2);
		break;
		case 4:
		 while (n2 == 0){
		 printf("N�o exite divis�o por 0!\nDigite outro (valor 2): ");
		 scanf("%d", &n2);
		 }
		 printf("Resultado da divis�o: %d ", n1 / n2);
		 break;
		default:
		printf("op��o invalida.\nDigite outra op�ao: "); 
	}
	
	return (0);	
		
	}

	
  

	   
	

