#include <stdio.h>
#define VAT 0.07
main(){
	int price ;
	float vat, total;
	printf("Enter Price: ");
	scanf("%d", &price);
	vat = price*VAT;
	total=price+vat;
	printf("...................\n");
	printf("PRICE: %d \n", price);
	printf("VAT: %.3f \n", vat);
	printf("TOTAL: %.3f ", total);
}

