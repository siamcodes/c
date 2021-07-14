#include <stdio.h>
main(){
	int age = 35;
	float gpa = 3.55; 
	char sex = 'M';
    char gender[5] = "Male";
    char name[] = "Somkiat Jaidee";
	
	printf("Welcome to C Programming  \n\n");
    printf("by %s \n", name);
    printf("Major: Computer \n");
    printf("I am %d year olds \n", age);
    printf("Grade Average %.2f \n", gpa);
    printf("I am %c \n", sex);
    printf("I am %s", gender);
}
