
/*
nome: luiz felipe
função: valor do quadrado da soma de tres valores
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>


int main(){
	int a,b,c,total;
	setlocale(LC_ALL,"portuguese");
	
	printf("Valor de (a)");
	scanf("%d",&a);
	  printf("Valor de (b)");
	  scanf("%d",&b);
	    printf("Valor de (c)");
	    scanf("%d",&c);
	      total = (a+b+c) * (a+b+c);
	        printf("valor do quadrado da soma de tres valores é: %d ", total);
}
	
	
