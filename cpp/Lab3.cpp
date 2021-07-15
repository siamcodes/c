#include <stdio.h>
main(){
	int price, ch;
	float vat, total; 
	printf("------- Food Menu ------- \n");
	printf("1. PIZZA \n");
	printf("2. KFC \n");
	printf("3. Coke \n");
	printf("4. PEPSI \n");
	printf("Please Select Choice: ");
	scanf("%d", &ch);
	if(ch == 1){
		printf("Pizza Price: ");
		scanf("%d", &price);
		vat = price*0.07;
		total = price + vat;
		printf("Vat = %.2f \n", vat);
		printf("Total = %.2f \n", total);
	}else if(ch == 2){
		printf("KFC Price: ");
		scanf("%d", &price);
		vat = price*0.07;
		total = price + vat;
		printf("Vat = %.2f \n", vat);
		printf("Total = %.2f \n", total);
	}else if(ch == 3){
		printf("Coke Price: ");
		scanf("%d", &price);
		vat = price*0.07;
		total = price + vat;
		printf("Vat = %.2f \n", vat);
		printf("Total = %.2f \n", total);
	}else if(ch == 4){
		printf("PEPSI Price: ");
		scanf("%d", &price);
		vat = price*0.07;
		total = price + vat;
		printf("Vat = %.2f \n", vat);
		printf("Total = %.2f \n", total);
	}else{
		printf("Please select choice again!!");
	}	
}
