/*
nome: luiz felipe
função: calcular salario minimo
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");

int salario, total;

printf("o salario minimo do dia (18/03/2022) é 1.212,00 R$\n ");
printf("Salario do funcionario: ");
scanf("%d", &salario);

if  (salario >= 1212) {
	printf("o funcionario recebe (igual) ou (mais do que 1 salario minimo!)\n ");
	}else { 
	  printf("o Funcionario recebe menos de um salario minimo!\n ");
        }
	
	return 0;
	
}
