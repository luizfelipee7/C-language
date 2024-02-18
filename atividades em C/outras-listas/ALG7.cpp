 
/*
nome: luiz felipe
função: salario e comissão 4% sobre vendas
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float vf,vv,total;
 printf("comissão de 4%, sobre as vendas\n");
  printf("Valor fixo do funcionario é:\n");
  scanf("%f",&vf);
   printf("Valor das Vendas é");
   scanf("%f",&vv);
   total = 4 * vv;
    printf("A comissão do funcionario é: %.2f\n", total);
	total = (4 * vv)+ vf;
     printf("O salario final do funcionario é: %.2f", total);
      return 0;
} 


