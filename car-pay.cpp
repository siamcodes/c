#include <stdio.h>
main(){
	int price, m;
	float tax, pay;
	price = 500000;
	price -= 150000;
	price /= 48;
	for(m=1; m<=48; m++){
		tax=price*0.03;
		pay=price+tax;
		printf("Month %d = %.2f \n",m, pay);
	}
}
