#include <stdio.h>

int fat(int n)
{
    int i;
    for(i=n;i>0;i--)
    {
     return n*i;   
    }
    
    
}
int main()
{

   
        int nm,aux=0,i;
    printf("digite o numero:");
  scanf("%d", &nm);
       
        
   
  
      for(i;i>0;i++)
    { 
        aux=fat(nm);
      printf("%d\n",aux);  
    }
        
        
    

}
    
