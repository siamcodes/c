#include <stdio.h>
main(){
	int choice;
	
	printf("--------- Food Menu ---------- \n");
	printf("  1. KFC    \n");
	printf("  2. MK     \n");
	printf("  3. Pizza  \n");
	printf("  4. Amezon \n");
	printf("--------------------------------\n");
	
	do{
		printf("Please select choice 1-4: ");
		scanf("%d", &choice);
	}while(choice<1 || choice>4);
	
	if(choice==1){
		printf("Welcome to KFC");
	}else if(choice==2){
		printf("Welcome to MK");
	}else if(choice==3){
		printf("Welcome to Pizza");
	}else if(choice==4){
		printf("Welcome to Amezon");
	}else{
		printf("See you again later!!");
	}
printf("\n\n----By Somkiat Jaidee----");
}  //end main
