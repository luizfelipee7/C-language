#include <stdio.h>

// caso base
// recursividade 
int fator (int n)
{
int ft=1;
	for (int i=1; i <= n; i++)
	{
	 ft = ft * i;	
	}
	return ft;
}

int recur(int n)
{
	int vfat;
	if (n==1)
	{
		return 1;
	}
	else 
	{
		vfat = n * recur(n-1);
		
	}
	
}
// int soma(int n)
// {
// 	int vfat;
// 	if (n==1)
// 	{
// 		return 1;
// 	}
// 	else 
// 	{
// 		vfat = n + soma(n-1);
		
// 	}
// 	return vfat;
// }
 int main()
{
	int num;
	printf("digite o numero: ");
	scanf("%d", &num);
	
	printf("numero fatorado %d ",recur(num));
}
