#include<stdio.h>
#include<malloc.h>

typedef struct no {
    int valor;
    struct no* prox;
} NO;

void push(NO** inicio, NO** fim, int valor) {
    NO* novoNo = (NO*) malloc(sizeof(NO));
    novoNo->valor = valor;
    novoNo->prox = NULL;
    if (*inicio == NULL) {
        *inicio = novoNo;
    } else {
        (*fim)->prox = novoNo;
    }
    *fim = novoNo;
}

int pop(NO** inicio, NO** fim) {
    if (*inicio == NULL) {
        return -1; 
    }
    NO* remover = *inicio;
    *inicio = remover->prox;
    if (*inicio == NULL) {
        *fim = NULL;
    }
    int valorRetornado = remover->valor;
    free(remover);
    return valorRetornado;
}

void imprimir(NO* inicio) {
    for (NO* aux = inicio; aux != NULL; aux = aux->prox) {
        printf("[%d]\n", aux->valor);
    }
}

int main() {
    NO* inicio = NULL;
    NO* fim = NULL;
    push(&inicio, &fim, 3);
    push(&inicio, &fim, 4);
    push(&inicio, &fim, 5);
    //pop(&inicio, &fim);
    imprimir(inicio);


    
}

