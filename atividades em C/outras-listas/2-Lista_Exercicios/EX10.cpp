#include <stdio.h>

main(){
	
int i, n[10], total=0;
float media;

	printf(" Digite 10 valores: \n");
	
	for(i=1;i<=10;i++){
		scanf("%d", &n[i]);
		total+=n[i];
	}
	
	media=total/10;
	
	printf("--------------------------------\n");
	
	for(i=1;i<=10;i++){
		
		if(n[i]==media){
			printf(" %d\n", n[i]);
		}
	}	
}
