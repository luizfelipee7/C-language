/*
nome: luiz felipe
fun��o: calcular m�s dias semanas e anos atuais
professor: marnes
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

  int main(){
  	
  	setlocale(LC_ALL,"portuguese");
  int nasc, ano, idade, total;
  printf("ano de nascimento:\n");
  scanf("%d",&nasc);
    printf("ano atual:\n");
    scanf("%d",&ano);
      idade = ano - nasc;
      printf ("idade: %d\n", idade);
        total = idade * 12;
        printf("m�ses: %d\n ", total);
          total = idade * 365;
          printf("dias: %d\n ", total);
            total = idade * 52;
            printf("semanas: %d\n ", total);
 }
	
	
