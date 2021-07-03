#include <stdio.h>

int main()
{
    int a, b, c, min;
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);
    (a < b && a < c) ? (min = a) : ((b < c) ? (min = b) : (min = c));
    printf("Smallest is %d\n", min);
    return 0;
}