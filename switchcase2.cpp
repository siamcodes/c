#include <stdio.h>

main(){
  start:
  	
	char menu;
	printf("Enter Menu:");
	scanf("%c", &menu);
	
	switch(menu){
		case 'a':  printf("KFC \n");
		           break;
		case 'b':  printf("Pizza \n");
		           break;
		case 'c':  printf("Amezon \n");
		           break;
		case 'd':  printf("MC \n");
		           break;  
		default : printf("Please select again!!\n");				
	}
	
	goto start;

}
