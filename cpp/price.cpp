#include <stdio.h>
#include <stdlib.h>
#define TAX 0.07
#define DISC 0.10
main(){
	st:
	int price;
	float vat, discount,total;
	printf("Enter Price: ");
	scanf("%d", &price );
	vat = price * TAX; 
	discount= price*DISC;
	total = (price-discount) + vat;
	printf("PRICE: %d \n VAT: %f \n DISCOUNT: %f \n TOTAL: %f \n", price, vat, discount, total);
	//printf("DISCOUNT: %f \n", discount);
	//printf("TOTAL: %f \n", total);
	system("pause");
	system("cls");
	goto st;
}
