#include <stdio.h>
#define MAX 4
void push(int* pilha,  int* topo, int valor)
{
	if(*topo < (MAX-1))
	{
		(*topo)++;
		printf("TOPO %d\n", *topo);
       pilha[*topo]= valor;
	}


}
int main()
{
	int pilha[10];
	int topo = -1;
	
	push(pilha, &topo, 3);
	push(pilha, &topo, 5);
	push(pilha, &topo, 7);
	push(pilha, &topo, 9);
	
	
  for(int i = 0; i < MAX; i++)
  {
  	printf("%d\n",pilha[i]);
  }
}
//	if(*topo == -1)
//	{
//		pilha[0] = valor;
//		*topo =0;
//	}
//	else{
//		*topo++;
//		pilha[*topo]= valor;
//	}
