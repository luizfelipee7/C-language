/*
nome: luiz felipe
função: calculadora
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,o ;

	printf("escolha sua operação (1) (2) (3) (4)\n");
	
	printf("1 - soma\n2 - subtração\n3 - Multiplicação\n4 - Divisão\n");
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
		printf("resultado da subtração: %d ", n1 - n2);
		break; 
		case 3:
		printf("Resultado da multiplicação: %d ", n1 * n2);
		break;
		case 4:
		 while (n2 == 0){
		 printf("Não exite divisão por 0!\nDigite outro (valor 2): ");
		 scanf("%d", &n2);
		 }
		 printf("Resultado da divisão: %d ", n1 / n2);
		 break;
		default:
		printf("opção invalida.\nDigite outra opçao: "); 
	}
	
	return (0);	
		
	}

	
  

	   
	

