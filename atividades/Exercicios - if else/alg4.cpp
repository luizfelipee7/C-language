/*
nome: luiz felipe
função: Informar Turno
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	char periodo;
	
	printf("Em que turno você estuda?\n");
	scanf("%c", &periodo);
	
	if (periodo == 'M'){
		printf("Matutino");
	}
	else if (periodo == 'V'){
		printf("Vespetino");
	}
	else if (periodo == 'N'){
		printf ("Noturno");
	}
	else{
		printf("inválido");
	}
	return 0;	

}
