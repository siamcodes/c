#include <stdio.h>

int main(){
	int price, discount;
	float vat, disc, total;
	
	printf("Enter Price: ");
	scanf("%d", &price);
	printf("Enter Discount: ");
	scanf("%d", &discount);
	
	vat = price * 7/100;
	disc = price * discount/100;
	total = (price-disc)+vat;
		
	printf("Vat      = %.2f \n", vat);	
	printf("Discount = %.2f \n", disc);	
	printf("Total    = %.2f \n", total);	
	
return 0;	
}
