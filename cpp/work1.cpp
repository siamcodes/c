#include <stdio.h>
main()
{
	int age=35;
	char sex='M';  // M = male
	char sch[50]="Siam Dhurakit";
	float gpa=2.59;	
	char name[30]="Somkiat Jaidee";
	
	printf("Programming \n");
	printf("By %s \n", name);
	printf("Age: %d Years \n", age);
	printf("Gender: %c \n", sex);
	printf("Grade Average: %.2f \n", gpa);
	printf("School: %s ", sch);
}
