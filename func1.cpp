#include <stdio.h>
void show(void){
  printf("Hello World \n"); 
  printf("By Somkiat Jaidee \n");
}

float abc(void){
	int x;
	printf("Enter price:");
	scanf("%d", &x);
	return x; 
}

void Vat(int price){
	float vat;
	vat=price*0.07;
	printf("Vat is %f", vat );
}

main(){
  show();
  printf("Value is %f \n", abc());	
  Vat(1000);
}
