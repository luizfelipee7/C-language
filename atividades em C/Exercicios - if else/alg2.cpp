/*
nome: luiz felipe
função: Informar qual valor é o maior
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2,n3;
	printf("valor 1:\n");
	scanf("%d", &n1);
	printf("valor 2:\n");
	scanf("%d", &n2);
	printf("valor 3:\n");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		printf ("%d é o maior", n1);
	}else if (n2 > n1 && n2 > n3){
		printf ("%d é o maior", n2);
	}
	else if(n3 > n1 && n3 > n2){
	printf ("%d é o maior");
	
	}
}

	
