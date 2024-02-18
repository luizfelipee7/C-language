
#include <string.h>
#include <stdio.h>

#define max 2 // escolha a quantidade de alunos da pesquisa

struct pesquisa 
{
    char nome[20];
    int idade;
    float peso;
    float altura;
    float imc;
    float mtotal;
  
    
};

void imcv(struct pesquisa* p) 
{ 
  
   p->imc = p->peso / (p->altura * p->altura);
}
void imctotal(struct pesquisa* p) 
{
   p->mtotal = p->imc  / max; 
}


 int main() 

 {
   
 struct pesquisa p[max];
 
     for(int i=0; i<max; i++)
     {
       printf("\nNome: ");
       scanf("%s", p[i].nome);

       printf("Idade: ");
       scanf("%d", &p[i].idade);

       printf("Peso: ");
       scanf("%f", &p[i].peso);

       printf("Altura: ");
       scanf("%f", &p[i].altura);

       imcv(&p[i]);
       imctotal(&p[i]);
    
        
           printf("\nIMC: %.2f\n", p[i].imc);
     }  
   
       printf("\nmedia total do IMC: %.2f\n", p->mtotal);
      
     return 0;
 }