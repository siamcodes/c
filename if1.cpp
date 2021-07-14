#include <stdio.h>

main(){
	int age;	
	printf("Enter Age:");
	scanf("%d", &age);
	
	if(age > 45){
		printf("Your are Old.");
	}else{
		printf("Your are Young.");
	}
		
}
