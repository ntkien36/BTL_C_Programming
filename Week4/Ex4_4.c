#include <stdio.h>

int main()
{
    int n;
    printf("Nhap 1 so n (n < 1000): ");
    scanf("%3d", &n);
    char s[100];
    printf("Nhap 1 chuoi nho hon 10 ky tu: ");
    scanf("%9s", &s);
    printf("Output: %d va %s", n, s);
    return 0;
}