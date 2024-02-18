/*
nome: luiz felipe
função: indentificar um triãngulo 
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int lado1,lado2,lado3;
	
	printf("Informe os lados do triângulo\n");
	printf("Lado 1 ");
	scanf("%d", &lado1);
	
	printf("Lado 2 ");
	scanf("%d", &lado2);
	
	printf("Lado 3 ");
	scanf("%d", &lado3); 
	
	if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
		    printf("os Lados formam um trângulo ");
		if (lado1 == lado2 && lado1 == lado3)
			printf("Equilátero");
		else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
			printf("isoscêles");
		else printf ("Ecaleno");
	    }
	    else  
		     printf("Os lados Não formam um Trângulo");
		 
		 return 0;   
	
}
