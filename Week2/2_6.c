#include <stdio.h>

#define PI 3.142

int main()
{
    double r, c, ac, as, v;
    r = 5.678;

    printf("Radius = %.3f\n", r);
    c = 2.0 * PI * r;

    printf("Circle's circumference = %.3f\n", c);
    ac = PI * r * r;

    printf("Circle's area = %.3f\n", ac);
    as = 4.0 * PI * r * r;

    printf("Sphere's area = %.3f\n", as);
    v = 4.0 / 3.0 * PI * r * r * r;

    printf("Sphere's volume = %.3f\n", v);

    return 0;
}