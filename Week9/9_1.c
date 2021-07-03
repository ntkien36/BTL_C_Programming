#include <stdio.h>

double energy(double m, double v);

int main()
{
    double mass, speed;
    printf("Input mass: ");
    scanf("%lf", &mass);
    printf("Input speed: ");
    scanf("%lf", &speed);
    printf("The kinetic energy is: %.2lf J\n", energy(mass, speed));
    return 0;
}

double energy(double m, double v)
{
    return m * v * v / 2;
}