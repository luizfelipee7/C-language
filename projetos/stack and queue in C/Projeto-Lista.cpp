#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct no
{
  int valor;
  struct no *proximo;

} NO;

void InserirValor(NO **inicio, NO **fim, int valor, int *quantidade)
{
  NO *novoNo = (NO *)malloc(sizeof(NO));
  novoNo->valor = valor;
  novoNo->proximo = NULL;
  if (*inicio == NULL)
  {
    *inicio = novoNo;
  }
  else
  {
    (*fim)->proximo = novoNo;
  }
  *fim = novoNo;
  (*quantidade)++;
}

void inserirPosicao(NO** inicio, NO **fim, int valor,int posicao, int *quantidade)
{
  if(posicao < 0 || posicao > *quantidade)
  {
    system("cls");
    printf("\nPosicao escolhida nao existe\n");
    return ;
  }
  
  NO *novoNo = (NO *)malloc(sizeof(NO));
  novoNo->valor = valor;

  if(*inicio == NULL)
  {
    novoNo->proximo = NULL;
    *inicio = novoNo;
    *fim = novoNo;
  }
  else if ((posicao-1) == 0)
  {
    novoNo->proximo = *inicio;
    *inicio = novoNo;
  }
 else if ((posicao-1) == *quantidade) 
  {
    NO* auxiliar = *inicio;
    while (auxiliar->proximo != *fim)
    {
      auxiliar = auxiliar->proximo;
    }
    auxiliar->proximo = novoNo;
    novoNo->proximo = *fim;
  }
  else 
  {
    NO* auxiliar = *inicio;
    for(int i = 0; i < posicao - 2;i++)
      {
        auxiliar = auxiliar->proximo; 
      }
    novoNo->proximo = auxiliar->proximo;
    auxiliar->proximo = novoNo;
  } 
    (*quantidade)++;
}

int RemoUltimoValor(NO** inicio, NO** fim,int* quantidade, int* valorRemovido) {
    
  if (*inicio == NULL) {
   
        return 0;
    
    }
   NO* remover = *fim; 
  *valorRemovido = remover->valor;
   if(*inicio == *fim)
    {
      *inicio = NULL;
       *fim =NULL;
      }
   else 
   {
    NO* auxiliar = *inicio;
   
     while(auxiliar->proximo != *fim)
      {
        auxiliar= auxiliar->proximo;
      }
    *fim = auxiliar;
   (*fim)->proximo = NULL;
    }

  (*quantidade)--;
  free(remover);
  return 1;
   }

bool RemoUltimoValorValor(NO** inicio, NO** fim, int* quantidade, int *valorRemov) {
    if (*inicio == NULL) {
        system("cls");
        printf("Valor nao encontadorrado na lista.\n");
        return false;
    }

    NO* anterior = NULL;
    NO* auxiliar = *inicio;

    while (auxiliar != NULL) {
        if (auxiliar->valor == *valorRemov) {
            if (anterior == NULL) {
                *inicio = auxiliar->proximo;
            } else {
                anterior->proximo = auxiliar->proximo;
            }

            if (*fim == auxiliar) {
                *fim = anterior;
            }
            free(auxiliar);
            (*quantidade)--;
            printf("\nVALOR [%d] REMOVIDO\n", *valorRemov);
            return true;
        }
        anterior = auxiliar;
        auxiliar = auxiliar->proximo;
    }

    
    return false;
}

int RemoPosicao(NO** inicio, NO **fim,int posicao, int *quantidade)
{
   if(posicao < 0 || posicao > *quantidade)
   {
    system("cls");
    printf("\nPosicao escolhida nao existe\n");
    return  -1;
    }
    NO* auxiliar= *inicio;
    NO*anterior=NULL;
  
  if(posicao == 0)
  {
    *inicio=auxiliar->proximo;
    if(*inicio==NULL)
    {
      
    *fim=NULL; 
    }
  }
  else if(posicao == 1)
     {
       *inicio = auxiliar->proximo;
      }
  else
 {
     for(int i=0;i<posicao-1;i++)
     {
       anterior = auxiliar;
       auxiliar = auxiliar->proximo;
      }    
    anterior->proximo = auxiliar->proximo;
   if(auxiliar == *fim)
   {
     *fim = anterior;
   }
 }
  
int ValorRemovido;
ValorRemovido = auxiliar->valor;
   free(auxiliar);
   (*quantidade)--;

  return ValorRemovido;
}


void imprimir(NO *inicio)
{
  if (inicio == NULL)
  {
    printf("A lista esta vazia.\n");
  }
  else
  {

    for (NO *auxiliar = inicio; auxiliar != NULL; auxiliar = auxiliar->proximo)
    {
      printf("[%d]\n", auxiliar->valor);
    }
  }
}
void Barra()
{
  for (int i = 0; i < 15; i++)
  {
    printf("---");
  }
  
  }
int PesquisarValor(NO* inicio, int valor, int**contador)
{
  bool encontadorrar = false;
  int posicao = 0;
  *contador = 0;

  for (NO* auxiliar = inicio; auxiliar != NULL; auxiliar = auxiliar->proximo)
  {
    if (auxiliar->valor == valor)
    {
      encontadorrar = true;
      (*contador)++;
    }
    posicao++;
  }

  if (encontadorrar)
  {
    printf("\nO valor [%d] existe na lista na(s) posicao(oes) -> ", valor);
    posicao = 1; 

    for (NO* auxiliar = inicio; auxiliar != NULL; auxiliar = auxiliar->proximo)
    {
      if (auxiliar->valor == valor)
      {
        printf("[%d] ", posicao);
      }
      posicao++; 
    }
    printf("\n");
  }
  else 
  {
    printf("\nO valor [%d] nao existe na lista\n", valor);
  }

  return encontadorrar ? 1 : 0;
}





enum func 
{
  inserir_valor=1,
  inserir_valor_posi,
  remover_ultimo_valor,
  remover_valor, 
  remover_posi, 
  pesquisar_valor, 
  imprimir_valor, 

  }lista;

int main()
{

system("color F0");  

  int quantidade = 0;
  NO *inicio = NULL;
  NO *fim = NULL;
  int posicao;
  int valor;
  bool contadorinuarInsercao = true;
  int op;
  int* contador = 0;
  int Valor;
  while (contadorinuarInsercao)
  {
    Barra();
    printf("\nLISTA\n");
    printf("\n1 - Inserir Valor na Lista\n");
    printf("2 - Inserir Valor na Posicao da Lista\n");
    printf("3 - Remover Ultimo Valor da Lista\n");
    printf("4 - Remover Valor da Lista\n");
    printf("5 - Remover Posicao da Lista\n");
    printf("6 - Pesquisar Valor na Lista\n");
    printf("7 - Imprimir Lista\n");
    printf("0 - Finalizar o programa\n");
    Barra();
    printf("\nEscolha uma opcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case inserir_valor:
      system("cls");
      printf("Insira um valor na Lista: ");
      scanf("%d", &valor);
      system("cls");
      InserirValor(&inicio, &fim, valor, &quantidade);
      printf("\nexistem [%d] numero(s) na Lista", quantidade);

      break;

    case inserir_valor_posi:
     system("cls");
      printf("Insira o novo Valor: ");
      scanf("%d", &valor);
      printf("Escolha uma Posicao da Lista: ");
      scanf("%d", &posicao);
      inserirPosicao(&inicio, &fim, valor, posicao, &quantidade);
     if(posicao<=quantidade && posicao >=0)
    {
        printf("\nExistem [%d] numero(s) na lista",quantidade);
    }
      

      break;

    case remover_ultimo_valor:
      
      system("cls");
      int valorRemovido;
      if (RemoUltimoValor(&inicio, &fim, &quantidade, &valorRemovido)) {
    printf("Valor [%d] removido da Lista\n", valorRemovido);
    printf("\nExistem [%d] numero(s) na Lista\n", quantidade);
   } else {
    printf("A Lista esta vazia\n");
    }
      break;
      
   
case remover_valor:
    system("cls");
    int valorRemov;
    printf("Escolha um valor para remover: ");
    scanf("%d", &valorRemov);

    if (inicio == NULL) {
        printf("\nValor nao encontrado na lista.\n");
    } else if (RemoUltimoValorValor(&inicio, &fim, &quantidade, &valorRemov)) {
        printf("\nExistem [%d] numero(s) na Lista\n", quantidade);
    } else {
        printf("\nValor nao encontrado na Lista\n");
    }
    break;
      case remover_posi:
      system("cls");
      printf("Escolha uma posicao para remover: ");
      scanf("%d", &posicao);

    Valor = RemoPosicao(&inicio, &fim, posicao, &quantidade);
      
        if(Valor!=-1){
         printf("\nValor [%d] removido da posicao [%d] da lista.\n", Valor, posicao);
    printf("\nExistem [%d] numero(s) na lista.\n", quantidade);
       }
    
    
      break;
        case pesquisar_valor:
        system("cls");
        printf("Digite um valor a ser pesquisado: ");
        scanf("%d", &valor);

         PesquisarValor(inicio, valor, &contador);
      
        
      
      break;
      case imprimir_valor:  

      system("cls");
      imprimir(inicio);
      break;
      
    case 0:
      contadorinuarInsercao = false;
      break;
      

    default:

      system("cls");
      printf("\n\nOpcao [%d] invalida. Tente outra Opcao.\n", op);
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


