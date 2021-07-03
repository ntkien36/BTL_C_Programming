#include <stdio.h>

int check(int n)
{
    int tong = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    if (tong == n)
        return n;
    else
        return 0;
}

int main()
{
    int n, tong = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Output: \n");
    for (int i = 6; i <= n; i++, tong = 0)
    {
        if (check(i) == i)
            printf("%d\n", i);
    }
    return 0;
}