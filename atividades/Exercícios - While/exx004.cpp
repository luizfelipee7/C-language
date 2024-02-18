#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    system("color A");

    int i=1,num;
    int n1 = 0, n2= 1;
    int pt;

  
    printf("\nSequencia de Fibonacci:\n");
    
    while(i<=16)
    {
        printf("%d, ",n1);
        pt = n1 + n2;
        n1 = n2;
        n2 = pt;
        i++;
    }

     return 0;

}