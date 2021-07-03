#include <stdio.h>

int main()
{
    double a, b;
    printf("Nhap so thu nhat: ");
    scanf("%lf", &a);
    printf("Nhap so thu hai: ");
    scanf("%lf", &b);

    printf("Moi quan he giua a va b la: \n");
    if (a == b)
    {
        printf("a bang b\n");
    }
    if (a != b)
    {
        printf("a khac b\n");
    }
    if (a >= b)
    {
        printf("a lon hon hoac bang b\n");
    }
    if (a <= b)
    {
        printf("a nho hon hoac bang b\n");
    }
    if (a > b)
    {
        printf("a lon hon b\n");
    }
    if (a < b)
    {
        printf("a nho hon b\n");
    }
    return 0;
}