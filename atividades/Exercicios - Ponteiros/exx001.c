#include <stdio.h>


#define MAX 4 // escolha a quantidade de funcionarios



void SalarioL(float* salarioB){

     for(int i = 0; i < 3; i++) {
       salarioB[i] = salarioB[i] * 0.92; 
    }
    
}

int main() {

float salarioB[MAX];


for(int i=0; i<MAX; i++)
    {
        printf("digite o %d salario: ", i + 1);
        scanf("%f", &salarioB[i]);
    }
          
          SalarioL(salarioB);
          
        for(int i=0; i<MAX; i++)
        {
            printf("\n Valor liquido do %d salario: ", i + 1);
            printf("%.2f", salarioB[i]);
        }             
       
        return 0;

}
