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
 

int i=0;
 float maior=0;
 

 struct aluno al[5];
 
 
  do
  {

 
    printf("Digite o nome do aluno: ");
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
}


     i++;

 }while(i<5);
 
 system("cls");
 
  printf("\n\n A Melhor media foi do: \n\n");
  
 if (al[0].media > al[1].media && al[0].media > al[2].media && al[0].media > al[3].media && al[0].media > al[4].media  )
{
	printf("%s\n",al[0].nome);
}

if (al[1].media > al[0].media && al[1].media > al[2].media && al[1].media > al[3].media && al[1].media > al[4].media  )
{
	printf("%s\n",al[1].nome);
}

if (al[2].media > al[0].media && al[2].media > al[1].media && al[2].media > al[3].media && al[2].media > al[4].media  )
{
	printf("%s\n",al[2].nome);
}

if (al[3].media > al[0].media && al[3].media > al[1].media && al[3].media > al[2].media && al[3].media > al[4].media  )
{
	printf("%s\n",al[3].nome);
}
if (al[4].media > al[0].media && al[4].media > al[1].media && al[4].media > al[2].media && al[4].media > al[3].media )
{
	printf("%s\n",al[4].nome);
}

 printf("media: %.2f\n",maior);
 printf("%s",al[i].cond);






}
