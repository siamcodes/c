#include <stdio.h>
main(){
	int x, y, z;
	printf("----Multiply----\n");
	printf("Enter: ");
	scanf("%d", &y);
	for(x=1; x<=12; x++){
		z=x*y;
		printf("%d * %d = %d \n",y,x,z);
	}
}
