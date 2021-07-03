#include <stdio.h>

int count_even(int *a, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", count_even(a, n));
    return 0;
}

int count_even(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}
