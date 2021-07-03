#include <stdio.h>
#define PI 3.14

int main()
{
    float r;
    printf("Nhap ban kinh: ");
    scanf("%f", &r);
    printf("Neu r la ban kinh hinh tron thi : \n");
    printf("Dien tich hinh tron la: %.2f\n", PI * r * r);
    printf("Chu vi hinh tron la: %.2f\n\n\n", 2 * PI * r);
    printf("Neu r la ban kinh hinh cau thi : \n");
    printf("Dien tich mat cau la : %.2f\n", 4 * PI * r * r);
    printf("The tich mat cau la : %.2f\n", 4.00 / 3.00 * PI * r * r * r);
    return 0;
}