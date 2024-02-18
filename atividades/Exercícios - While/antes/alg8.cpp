
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	
	int i=1,num;
	int n1 = 0, n2 = 1;
	int pt;
	printf("informe a quantidade de termo ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		if (i == 1)
			printf("%d,  ", n1);
		else{
		
        	pt = n1 + n2;
        	n1 = n2;
        	n2 = pt;
        
       		printf("%d,  ",n1);
    	}
        i++;
    }
  
    return 0;
	
		
	
}
