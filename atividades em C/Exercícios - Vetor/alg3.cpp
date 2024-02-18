#include<stdio.h>
int main()
{
 int n[5], i, soma=0;

 for(i=0; i<5; i++)
 {
 printf("Qual o %d valor?\n ", i+1);
 scanf("%d", &n[i]);
 soma+=n[i];
 }


 printf("soma: %d", soma);


} 
