#include <stdio.h>
int main()
{
    float pi = 3.14f;
    float half = 3 / 2.0f;
    float half2 = 3 / 2;

    printf("PI: %f\n", pi);
    printf("Half of 3: %f\n", half);
    printf("Half of 3: %f\n", half2);

    double gravity = 9.807;
    double earth_mass = 5.972E24;
    double meter = 1E-3;

    printf("Earth gravity: %lf m/s^2\n", gravity);
    printf("Earth mass: %lf kg\n", earth_mass);
    printf("1 centimeter: %lf meter\n", meter);
    return 0;
}
