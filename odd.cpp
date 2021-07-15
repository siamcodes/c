#include <stdio.h>
main(){
st:
	int x;
	printf("Input:");
	scanf("%d", &x);
	
	for(int i=1; i<=x ; i++){
		if(x%i==0){
			printf("%d \t",i);
		}	  		
	}
	printf("\n");
goto st;
}
