/*
nome: luiz felipe
fun��o: identificar valor e verificar se � divisivel por 5 ou por 4 
professor: marnes 
data: 26/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int valor;
	
	printf("digite um valor: ");
	scanf("%d", &valor);
	
	if (valor % 5 == 0 && valor % 4 == 0){
		printf("o valor � divisivel por 5 e por 4");
    }  
	else if (valor % 5 == 0){
		printf ("o valor � somente divisivel por 5 ");
    }
	 else if (valor % 4 == 0){
		printf("O valor � somente divisivel por 4 ");
	}
	else printf ("O valor n�o � divisivel nem por 4 nem por 5");
	
	return 0;
		
}
	

