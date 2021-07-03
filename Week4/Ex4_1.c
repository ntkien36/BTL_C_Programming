#include <stdio.h>

void main()
{
    int a;
    double b;
    printf("Enter the integer: ");
    scanf("%d", &a);
    printf("Enter the double: ");
    scanf("%lf", &b);
    printf("The integer is %d, the double is %lf", a, b);
}