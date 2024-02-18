
#include <string.h>
#include <stdio.h>

#define max 4
struct paciente // escolha a quantidade de pacientes

{
    char nome[40];
    int idade;
    char profissao[20];
    char prioridade[20];
};

void Prioridade(struct paciente* p) 
{ if(p->idade > 60 ||
       strcmp(p->profissao,"enfermeiro") == 0 ||
      strcmp(p->profissao, "medico") == 0 ||
      strcmp(p->profissao, "motorista") == 0 ||
      strcmp(p->profissao, "motoboy") == 0 ||
      strcmp(p->profissao, "atendente") == 0) 
    {
    strcpy(p->prioridade, "alta");
  } else  {
    strcpy(p->prioridade, "desconhecida");
  }
}

int main() {


int i=0;
struct paciente p[max];
 
  do
  {
     
    printf("\nDigite o nome do paciente: ");
    scanf("%s", p[i].nome);

    printf("Idade: ");
    scanf("%d", &p[i].idade);

     printf("Profissao: ");
    scanf("%s", p[i].profissao);

   Prioridade(&p[i]);

   printf("\nNome: %s\n", p[i].nome);
   printf("Idade: %d\n", p[i].idade);
   printf("Profissao: %s\n", p[i].profissao);
   printf("Prioridade: %s\n", p[i].prioridade);

    i++;

     }while(i<max);
        

}