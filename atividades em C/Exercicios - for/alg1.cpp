#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{ 
  setlocale(LC_ALL,"portuguese");
   system("color A");
    int x,valor;

printf("tabuada do\n ");
printf("(1)\n ");
printf("(2)\n ");
printf("(3)\n ");
printf("(4)\n ");
printf("(5)\n ");
printf("(6)\n ");
printf("(7)\n ");
printf("(8)\n ");
printf("(9)\n ");
printf("(10)\n ");
printf("valor: ");
scanf("%d", &valor);
system("cls");


    switch(valor)
    {
        case 1:
        
        for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;
       
        case 2:
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x); 
        break;
        
        case 3: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 4: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 5: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 6: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 7: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 8: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 9: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        case 10: 
          for(x=1; x<=10 ; x++)
        printf("%d x %d = %d\n",valor,x,valor*x);
        break;

        default:
        printf("tabuada do [%d] inavalida",valor);

    }
 
 return 0;

}