#include <stdio.h>
main(){
	int x=10;
	while(x>0){
		printf("Hello %d \n", x); 
		x--;
	}
	//----
	do{
		printf("Hi %d \n",x);
		x++;		
	}while(x<10);
	//----
	for(int i=0 ; i<=10 ; i++){
		printf("Somkiat %d \n",i);
	}			
}

