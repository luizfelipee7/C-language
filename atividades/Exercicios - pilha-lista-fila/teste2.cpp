#include<stdio.h>
typedef struct no {
int valor;
struct no* prox;
} NO;


int main() {
NO no1;
no1.valor = 10;
no1.prox = NULL;

NO no2;
no2.valor = 20;
no2.prox = &no1;

NO no3;
no3.valor = 30;
no3.prox = &no2;

NO no4;
no4.valor = 40;
no4.prox = &no3;


NO* aux = &no4;

for (aux; aux!=NULL;aux=aux->prox)
{
	printf("%d\n", aux->valor);
}

	

}
