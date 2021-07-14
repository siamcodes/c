#include <stdio.h>
int main(){
	st:
    int score;
    printf("\n\nEnter Score: ");
    scanf ("%d", &score);

    if (score >= 0 && score <= 49)
        printf("Your grade is F");
    else if (score >= 50 && score <= 59)
        printf("Your grade is D");
    else if (score >= 60 && score <=69)
        printf("Your grade is C");
    else if (score >= 70 && score <=79)
        printf("Your grade is B");
    else if (score >= 80 && score <=100)
        printf("Your grade is A");    
    else
        printf("Please enter score again!!!");
        
    goto st;
    return 0;
}

