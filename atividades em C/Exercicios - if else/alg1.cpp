/*
nome: luiz felipe
função: informar se o valor é positivo ou negativo
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor;
	printf("digite o valor:\n ");
	scanf("%d", &valor);
	
	if(valor > 0){
		printf("positivo");	
	}
	else if(valor < 0){
    	printf("negativo");
	}
	else {
	 printf("Neutro");	
	}
	return 0;
		
}
