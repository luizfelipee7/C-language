#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
  struct aluno{

    char nome[100];
    float nota1, nota2, media;
    char cond[100];
 
 };

int main()  
{
 

int i=0,j=0,n=3;
 float maior=0;
char best[100];
 
 struct aluno al[5];
 
 
  do
  {

    printf("Digite o nome do aluno %d: ",i+1);
    scanf("%s", al[i].nome);
    printf("nota1: ");
   scanf("%f", &al[i].nota1);
   printf("nota2: ");
   scanf("%f", &al[i].nota2);

     al[i].media = ((al[i].nota1 + al[i].nota2) / 2);

   if (al[i].media < 6) 
   {
    strcpy(al[i].cond, "REPROVADO\n");
    }
    else 
    { 
     strcpy(al[i].cond, "APROVADO\n");    
    }

printf("\n%s\n",al[i].cond);
 if (al[i].media > maior)
 {
 
   maior=al[i].media;
   strcpy(best, al[i].nome);
}


     i++;

 }while(i<5);
 
 system("cls");
 
  printf("\n\n A Melhor media foi do: \n\n");

printf("%s\n",best);
 printf("media: %.2f\n",maior);
 printf("%s",al[i].cond);

}
