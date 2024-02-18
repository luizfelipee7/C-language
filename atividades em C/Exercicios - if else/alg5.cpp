/*
nome: luiz felipe
função: informar semana
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int semana;
	printf("digite o numero da semana:");
	scanf("%d", &semana);
	
	if (semana == 1){
		printf("Domingo");
	}
	else if (semana == 2){
	printf ("Segunda");
    }
    else if ( semana == 3){
    printf ("Terça");
    } 
    else if (semana ==  4){
    	printf("Quarta");
	}
	else if (semana == 5){
		printf("Quinta");
	}
	else if (semana == 6){
		printf ("sexta");
	}
	else if (semana == 7){
	printf ("Sabado");
    }  else{
    printf("invalido");
   }
	
	
    
    
	
}
	
	
	
	

	

	
	
	
	
