/*
nome: luiz felipe
fun��o: converte graus (C�) para graus (f�)
professor: marnes 
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
float c,total;
printf(" Convers�o de C�lsius para Fahrenheit\n");
printf(" Valor em C�lsius (C�): ");
scanf("%f",&c);
total = (c / 5) * 9 + 32;
printf(" Valor convertido em Fahrenheit (F�)�: %.2f", total);
return 0;
}
