#include <stdio.h>

void sum_cube(int n);
void sub(int n);
void first_square(int n);

int main()
{
    int x;
again:
    fflush(stdin);
    printf("Input your number: ");
    scanf("%d", &x);
    if (x < 1)
    {
        printf("The number must be >= 1\n");
        goto again;
    }

    sum_cube(x);
    sub(x);
    first_square(x);

    return 0;
}

void sum_cube(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i * i * i;
    printf("The sum of the cube of integers from 1 to %d is: %lld\n", n, sum);
}

void sub(int n)
{
    printf("All submutiples of %d: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void first_square(int n)
{
    printf("First %d perfect square numbers: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%lld ", (long long)i * i);
    }
    printf("\n");
}