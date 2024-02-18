#include <stdio.h>
#include <stdlib.h>




#define max 5

int main()
{
    
    int idades, soma = 0; 
    
    float media;
    

    for(int i=0;i<max;i++,idades++)
    {
        printf("digite a %d idade: ", i + 1);
        scanf("%d", &idades);
    
             soma += idades; 
        
    }
        system("cls");
        media = soma / max;
        printf("media %.2f\n ", media);
     

    return 0;
}

 
