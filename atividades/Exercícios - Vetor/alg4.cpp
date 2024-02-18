#include<stdio.h>
int main()
{
 int x[10], y[10], i, p=0;

 printf("Qual o valor de x:\n ");
 for(i=0; i<10; i++)
 {

 scanf("%d", &x[i]);
 }
 printf("Qual o valor de y:?\n ");
 for(i=0; i<10; i++)
 {

 scanf("%d", &y[i]);
 }

 for(i=0; i<10; i++)
 p+= x[i]* y[i];


 printf("\nO produto escalar de x e y: %d ", p);


}
