#include <stdio.h>
main(){
	int x, y, z;
	printf("Enter Multiply:");
	scanf("%d", &x);
	for(y=1; y<=12 ; y++){
		z = x*y;
		printf("%d * %d = %d \n", x,y,z);
	}
	printf("By Somkiat Jaidee");
}
