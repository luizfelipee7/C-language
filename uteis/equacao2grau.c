#include <stdio.h>
#include <math.h>


int main() {
 
 float a = 0;
 float b = 0;
 float c = 0;

 float delta = 0;
 float raizdelta = 0;

 float resx1 = 0;
 float resx2 = 0;

   printf("EQUACAO DE 2GRAU\n");
 
   printf("\n digite o valor de a: ");
   scanf("%f",&a);
   printf("digite o valor de b: ");
    scanf("%f",&b);
   printf("digite o valor de c: ");
    scanf("%f",&c);

     delta = pow(b, 2) - 4 * a * c;

     
       if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else {
        raizdelta = sqrt(delta);

        resx1 = (-b + raizdelta) / (2 * a);
        resx2 = (-b - raizdelta) / (2 * a);

        printf("\nO Delta eh: %f\n ", delta);
        printf("\nO x1 eh: %f\n ", resx1);
        printf("\nO x2 eh: %f\n ", resx2);
    }
     
}