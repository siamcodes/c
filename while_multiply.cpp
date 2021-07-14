#include <stdio.h>
main(){
	st:
	int x,y,z;
	x = 2;
	y = 1;
	while(y <= 12){
		z = x * y;
		printf("%d * %d = %d \n", x, y, z);
		y++;
	}
	goto st;
}
