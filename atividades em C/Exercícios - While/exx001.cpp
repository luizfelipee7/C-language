
#include <stdio.h>

int main()
{
    int nm,i=1;
    printf("\t\t\t\t\t\t[TABUADA]\n\n");
     printf("Escolha o numero da tabuada: ");
     scanf("%d", &nm);

     while(i<=10)
     {
        if(nm>10 || nm<1)
        {
            break;
        }
        printf("\n %d x %d = %d", i, nm, nm*i);
        i++;
     }
}