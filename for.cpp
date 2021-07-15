#include <stdio.h>
main(){
	int i;
	printf("Enter number:");
	scanf("%d", &i);
	
	for(int x=1 ; x<=i ; x++){
		printf("Hello %d \n", x);
	}	
}


