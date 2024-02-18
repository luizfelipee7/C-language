#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>


typedef struct no {
  int valor;
  struct no *prox;

} NO;

void put(NO **inicio, NO **fim, int valor, int *quantidade) 
{
  NO *novoNo = (NO *)malloc(sizeof(NO));
  novoNo->valor = valor;
  novoNo->prox = NULL;
  if (*inicio == NULL) {
    *inicio = novoNo;
  } else {
    (*fim)->prox = novoNo;
  }
  *fim = novoNo;
  (*quantidade)++;
}

int get(NO** inicio, NO** fim,int* quantidade) {
    if (*inicio == NULL) {
        return -1;
    }
    NO* remover = *inicio;
    *inicio = remover->prox;
   (*quantidade)--; 
    if (*inicio == NULL) {
        *fim = NULL;
    }
  int valorRetornado = remover->valor;
  free(remover);
  return valorRetornado;
  
}

void getall(NO** inicio,int* quantidade)
{
  while(*inicio != NULL)
    {
       NO* remover = *inicio; 
      *inicio = remover->prox;
    (*quantidade)--;
      free(remover);
    }
  
   }

void imprimir(NO *inicio) {
  if (inicio == NULL) {
    printf("A fila esta vazia.\n");
  } else {
     
    for (NO *aux = inicio; aux != NULL; aux = aux->prox) {
    printf("[%d]\n", aux->valor);
    }
  }
}
void Barra(){
	for(int i=0;i<15;i++){
	printf("---");
	}
	
}


int main() {
   
   
   system("color F0");

  int quantidade = 0;
  NO *inicio = NULL;
  NO *fim = NULL;
  int valor;
  bool continuarInsercao = true;
  int op;

  while (continuarInsercao) {
    Barra();
	printf("\n1 - Inserir Valor na Fila\n");
    printf("2 - Remover Primeiro Valor da Fila\n");
    printf("3 - Remover Todos os Valores da Fila\n");
    printf("4 - Imprimir Fila\n");
    printf("0 - Finalizar o programa\n");
    Barra();
	printf("\nEscolha uma opcao: ");
    scanf("%d", &op);

    switch (op) {
      case 1:
        system("cls");
        printf("Insira um valor na fila: ");
        scanf("%d", &valor);
         system("cls");
        put(&inicio, &fim, valor, &quantidade);
        printf("\nexistem [%d] numero(s) na fila",quantidade);
        
        break;

      case 2:
        
        system("cls");
        printf("valor [%d] removido da fila\n",get(&inicio, &fim, &quantidade));

        printf("\nexistem [%d] numero(s) na fila",quantidade);

        break;

      case 3:
        system("cls");
        printf("Valores removidos: \n");
        imprimir(inicio);
         printf("Aguarde 4s... \n");
        sleep(4);
        getall(&inicio,&quantidade);
         system("cls");
        printf("A fila esta vazia");

        break;

      case 4:
        
        system("cls");
      
        imprimir(inicio);
        
       system("pause");
        system("cls");
        
        break;

      case 0:
        continuarInsercao = false;
        break;

      default:
         
         system("cls");
        printf("\n\nOpcao [%d] invalida. Tente outra Opcao.\n",op);
        sleep(3);
        system("cls");
        break;
  
    }

    printf("\n");
  }
system("cls");
  printf("Programa encerrado.\n");

  return 0;
}
