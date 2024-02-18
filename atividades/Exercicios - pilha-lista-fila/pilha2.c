
#include<stdio.h>
#include<malloc.h>


typedef struct no {
int valor;
struct no* prox;
} NO;

void push(NO** topo, int valor) {
NO* novoNo = (NO*) malloc(sizeof(NO));
novoNo->valor = valor;
if(*topo == NULL) {
novoNo->prox = NULL;
*topo = novoNo;
} else {
novoNo->prox = *topo;
*topo = novoNo;
}
}

int pop(NO** topo) {
if(*topo != NULL) {
NO* remover = *topo;
*topo = remover->prox;
int valorRetornado = remover->valor;
free(remover);
return valorRetornado;
}
}

void imprimir(NO* topo) {
for(NO* aux = topo; aux != NULL; aux = aux->prox) {
printf("[%d]\n", aux->valor);
}
}

int main() {
NO* topo = NULL;
push(&topo, 3);
push(&topo, 4);
imprimir(topo);
pop(&topo);
pop(&topo);
push(&topo, 3);
push(&topo, 4);
push(&topo, 3);
imprimir(topo);
pop(&topo);
}
