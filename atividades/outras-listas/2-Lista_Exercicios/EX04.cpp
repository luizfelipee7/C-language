#include <stdio.h>

main (){

int F, C;
double GF, GC;

    printf(" Digite ums temperatura em Graus Fahrenheit: \n");
    scanf("%d", &F);
    scanf("%lf", &GF);

    C=(F-32.0) * (5.0/9.0);
    GC=(GF-32)*(5/9);

    printf(" %dF --> %dC\n", F, C);
    printf(" %.0lfF --> %.0lfC", GF, GC);

}
