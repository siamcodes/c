#include <stdio.h>
float triangle(void);
float circle(void);

main(){
	printf("Triangle is %f \n", triangle());
	printf("Circle is %f \n", circle());
}

float triangle(void){
	int w=5, h=10;
	float ans;
	ans = 0.5*w*h;
	return ans;
}

float circle(void){
	const float PI=3.14;
	int r=10;
	float answer;
	answer=PI*r*r;
	return answer;
}


