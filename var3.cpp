#include <stdio.h>
#include <stdbool.h>
int main (){
    bool gender = 0;
    bool open = 1;

    if (gender){
        printf("This is the boy.\n");
    }
    else{
        printf("This is the girl.\n");
    }

    if (open){
        printf("The door is open.\n");
    }
    else{
        printf("The door is not open.\n");
    }

    return 0;
}
