/*
nome: luiz felipe
função: Informar estatus civil s;c;v;d.
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char estatus;
	
	printf("informa seu estatus civil:\n");
	scanf("%c", &estatus);
	
	if (estatus == 'S' or estatus == 's'){
		printf("solteiro");
	}
else if (estatus == 'C'or estatus == 'c'){
		printf("casado");
	}
	else if (estatus == 'V' or estatus == 'v'){
		printf ("viúvo");
	}
	else if (estatus == 'D' or estatus == 'd'){
		printf ("Divorciado");
	}
	else{
		("invalido");
	}

	return 0;

}
	
