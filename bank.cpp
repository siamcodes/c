#include <stdio.h>
main(){
	int money, month = 1 ;
	float interest, total;
	
	printf("Enter Money:");
	scanf("%d", &money);
	
	while(month <= 12){
	   interest = money*0.1;  // 10%
	   total = money+interest;
	   printf("%d \t  %.2f \t %.2f \n",money, interest, total);
	   money= money-interest;
	   month++;
	}	
}
