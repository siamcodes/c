#include <stdio.h>
main(){
	int num[10];
	float avg, sum=0;
	for(int i=0; i<10; i++){
	  printf("Enter Number%d: ", i+1);
	  scanf("%d", &num[i]);
	  sum=sum+num[i];	
	}	
	avg=sum/10;
	printf("Average = %.2f \n",avg);
}
