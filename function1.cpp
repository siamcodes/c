#include <stdio.h>
void abc(void){
  	printf("Hello World\n");
  	printf("By Somkiat Jaidee\n");
}

void multiply(void){
	int x, y=2, z;
	for(x=1; x<=12; x++){
		z=x*y;
		printf("%d * %d = %d\n",y,x,z);
	}	
}

main(){
   	abc();
   	multiply();
}



