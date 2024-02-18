#include <stdio.h>

int main()
{
	int m, c, mi, dec;
	printf("digite o valor (m): ");
	scanf("%d", &m);

	c = m * 100;
	mi = m * 1000;
	dec = m * 10;

	printf("\nvalor em decimetros (dm): [%d]", dec);
	printf("\nvalor em centimetros (c): [%d]", c);
	printf("\nvalor em milimetros (mm): [%d]", mi);
}
