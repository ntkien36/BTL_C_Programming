#include <stdio.h>

int main(void)
{
    double km;
    printf("Nhap so km: ");
    scanf("%lf", &km);
    printf("So dam la: %.2f\n", km * 0.62);
    return 0;
}