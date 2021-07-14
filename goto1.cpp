#include <stdio.h>
int main() {
    int num = 27;
   if (num % 2 == 0){
   	 goto even;     
   }                      //jump to even
   else {
   	 goto odd;   
   }     
                          //jump to odd
    even:
        printf("%d is even", num); 
		return num;       //return if even
    odd:
        printf("%d is odd", num);
        return num;       //return if even

    return 0;
}
