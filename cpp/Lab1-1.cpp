#include <stdio.h>
main(){
  int age = 35; 
  float gpa = 2.49;
  char gender= 'M';
  char sch[36] = "Siam Dhurakit Technological Collage";

  printf("My First Program \n");
  printf("Mr. Somkiat Jaidee \n");
  printf("Age is %d years \nGPA is %f \n", age, gpa);
  printf("Gender is %c \n", gender);
  printf("%s \n", sch);
  printf("%c %c %c %c ", sch[0],sch[5],sch[14],sch[28]);
  
}
