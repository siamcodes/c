#include <stdio.h>
main(){
	int x=1;
	while(x < 10){
		printf("Somkiat %d \n", x);
		x++;
	}
	
	do{
	  printf("Somkiat %d \n", x);
	  x--;	
	}while(x > 0);	
	
	for(int i=0 ; i<10 ; i++ ){
		printf("Somkiat Jaidee %d \n", i);
	}
		
}
