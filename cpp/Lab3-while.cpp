#include <stdio.h>
main(){
	int x=10;
	while(x > 0){
		printf("Somkiat %d \n", x);
		x--;
	}
	//-----------------
	do{
	  printf("Somkiat %d \n", x);
	  x++;	
	}while(x <= 10);
	//-----------------
	for(int i=0; i<=10 ; i++){
	  printf("Jaidee %d \n", i);	
	}
			
}
