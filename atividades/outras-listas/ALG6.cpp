/*
nome: luiz felipe
função: converte graus (C°) para graus (f°)
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float c,total;
printf(" Conversão de Célsius para Fahrenheit\n");
printf(" Valor em Célsius (C°): ");
scanf("%f",&c);
total = (c / 5) * 9 + 32;
printf(" Valor convertido em Fahrenheit (F°)é: %.2f", total);
return 0;
}
