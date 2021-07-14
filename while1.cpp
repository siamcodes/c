#include <stdio.h>
main(){
	int i;
	printf("Enter Number:");
	scanf("%d", &i);
	
	while(i > 0){
		printf("Hello World %d \n", i);
		i--;		
	}	
}
