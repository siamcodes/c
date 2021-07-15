#include <stdio.h>
main(){
	int i[10];
	float sum=0, avg;
	
	for(int x=0; x<=9; x++){
	  printf("Enter Number %d:",x+1);
	  scanf("%d", &i[x]);
	  sum=sum+i[x];	
	}	
	avg=sum/10;
	printf("Average= %.2f \n", avg);  	
}
