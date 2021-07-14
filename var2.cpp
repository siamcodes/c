#include <stdio.h>
int main()
{
    float pi = 3.14;
    int r;
    printf("Enter circle radius ");
    scanf("%d", &r);
    double result = pi * r* r;
    printf("Area is %f", result );
    return 0;
}
