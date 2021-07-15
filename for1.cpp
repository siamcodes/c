#include <stdio.h>
main(){
	int x, y=3, z;
	printf("---Multiply---\n");
	for(x=1 ; x<=12 ; x++){
		z=x*y;
		printf("%d * %d = %d \n",y,x,z);
	}	
}
