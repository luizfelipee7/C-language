/*
nome: luiz felipe
função: Volme da Caixa retangular 
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>



int main(){

setlocale(LC_ALL,"portuguese");
float c,l,h,v;
  printf("O Volme de uma Caixa retangular \n");
   printf("Valor do Comrpimento: ");
   scanf("%f",&c);
     printf("Valor da largura: ");
     scanf("%f",&l);
       printf("Valor da altura: ");
       scanf("%f",&h);
        v = c*l*h;
        printf("O Volme da Caixa retangular é %.2f ", v);
     return 0;

}
