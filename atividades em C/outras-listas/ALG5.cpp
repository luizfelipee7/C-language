/*
nome: luiz felipe
função: média ponderada de 3 notas
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float n1,n2,n3,total;
printf("pesos São (1) (2) (3) \n");
printf("Media ponderada de 3 notas\n");
 printf("valor da Nota 1: ");
 scanf("%f",&n1);
  printf("valor da Nota 2: ");
  scanf("%f",&n2);
   printf("valor da Nota 3: ");
   scanf("%f",&n3);
    total = ((n1*1)+(n2*2)+(n3*3))/6;
    printf("A média Ponderada é %.2f", total);
    return 0;


}


	
	
	
	
	
	
