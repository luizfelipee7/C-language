
#include<stdio.h>
#define TAMANHO 3



void push(int* pilha, int* topo, int valor) {
if(*topo < (TAMANHO - 1)) {
(*topo)++;
pilha[*topo] = valor;
}
}



int pop(int* pilha, int* topo) {
if(*topo > -1) {
int valorRemovido = pilha[*topo];
(*topo)--;
return valorRemovido;
}
return 0;
}


void imprimir(int* pilha, int* topo) {
for(int i = *topo; i >= 0; i--) {
printf("[%d]\n", pilha[i]);
}
}
int main() {
int pilha[TAMANHO];
int topo = -1;
push(pilha, &topo, 3);
push(pilha, &topo, 4);
push(pilha, &topo, 5);
pop(pilha, &topo);
pop(pilha, &topo);
pop(pilha, &topo);
push(pilha, &topo, 3);
push(pilha, &topo, 4);
push(pilha, &topo, 5);
imprimir(pilha, &topo);
}
