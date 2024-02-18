#include <stdio.h>

main(){
	
int n1, n2;	
	
	printf(" Digite dois valores: \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	printf("\n");
	
	if(n1>n2){
		for(n2; n2<=n1; n2++){
			printf("%d ", n2);
		}
	}
	
	if(n1<n2){
		for(n2; n2>=n1; n2--){
			printf("%d ", n2);
		}
	}
	
	if(n1==n2){
		printf(" Valores Iguais");
	}	
}
