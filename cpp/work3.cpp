#include <stdio.h>
//#define PI 3.14
main(){
	st:
	int r = 10;
	float area;
	const float PI=3.14 ; 
	printf("Enter Redius: ");
	scanf("%d", &r);
	area = PI*r*r;
	printf(" Redius = %d \n Area = %f \n", r, area);
	goto st;
}


