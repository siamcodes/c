#include <stdio.h>
#include <stdlib.h>
main(){
	st:
	char menu;
	printf("-----Restaurant-------\n");
	printf("1. Pizza \n");
	printf("2. MK \n");
	printf("3. KFC \n");
	printf("4. Exit \n");
	printf("Please enter menu(1-4):");	
	scanf("%c", &menu);
	if(menu == '1'){
		printf("Pizza Restaurant \n");
	}else if(menu == '2'){
		printf("MK Restaurant \n");
	}else if(menu == '3'){
		printf("KFC Restaurant \n");
	}else if(menu == '4'){
		exit(0);
	}else{
		printf("Invalid? \n");	
	}
	system("pause");
	system("cls");	
	goto st;	
}
