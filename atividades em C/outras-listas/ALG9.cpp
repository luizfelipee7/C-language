 
/*
nome: luiz felipe
função: calcular hipotenusa do triângulo
professor: marnes 
data: 18/03/2022 
*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){

setlocale(LC_ALL,"portuguese")
double ca, co ,hipotenusa;
printf("Calcule a Hipotenusa\n");

printf("Valor do Cateto 1 : ");
scanf("%lf", &ca);

printf("Valor do Cateto 2 : ");
scanf("%lf", &co);

hipotenusa = sqrt( pow(ca, 2) + pow(co, 2) );

printf("Valor da Hipotenusa e: %.2lf ", hipotenusa);
return 0;
}

