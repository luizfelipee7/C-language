/*
nome: luiz felipe
fun��o: calcular m�s dias semanas e anos atuais
professor: marnes
data: 18/03/2022 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>

  int main()
  {
  	int num, i, cont=0;

    printf("numero ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
     if(num%i==0)
     {
      cont++;
      printf("%d",cont);
     }
      
    }
 }
	
	
	
	
	

