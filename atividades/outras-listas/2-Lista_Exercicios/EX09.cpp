#include <stdio.h>

main(){
	
int n=1010, p1, p2, p3;	
		
	do{
			
	p1=n/100;
	p2=n%100;
	p3=p1+p2;
	
	if(p3*p3==n){
		printf(" %d\n", n);
	}
		
	n++;
	
	}while(n<10000);
	
}
