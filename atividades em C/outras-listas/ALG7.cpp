 
/*
nome: luiz felipe
fun��o: salario e comiss�o 4% sobre vendas
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float vf,vv,total;
 printf("comiss�o de 4%, sobre as vendas\n");
  printf("Valor fixo do funcionario �:\n");
  scanf("%f",&vf);
   printf("Valor das Vendas �");
   scanf("%f",&vv);
   total = 4 * vv;
    printf("A comiss�o do funcionario �: %.2f\n", total);
	total = (4 * vv)+ vf;
     printf("O salario final do funcionario �: %.2f", total);
      return 0;
} 


