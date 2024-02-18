#include <stdio.h>
#include <stdlib.h>

int vet[1000];
void calcularfibo(int i){
if (i == 1 || i == 2){
  vet[i] = 1;
}
else 
 {
  vet[i] = fibonaci(i-1) + fibonaci(i-2);
  }
}

int fibonaci(int i){
  if(vet[i]==0){
    calcularfibo(i);
    printf("%d ", vet[i]);
      }
     else{
     return vet[i];
     }
   } 
  
  


int main(){

int i,n;
int *vet;
printf("Digite o nesimo termo para gerar a serie Fibonacci respectiva: ");
scanf("%d",&n);

for(i=0;i<=n;i++)
  
fibonaci(i);
  }
  