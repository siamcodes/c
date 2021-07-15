#include <stdio.h>
int num[10], nums=0;
float avr;
void average(void);

main(){
 average();
}
//------------------------------------
void average(void){
	for(int i=0; i<=9; i++){
		printf("Input Number%d: ", i+1);
		scanf("%d", &num[i]);
		nums=num[i]+nums;	
	}
	avr=nums/10;
	printf("Average is %.2f \n",avr);	
}


