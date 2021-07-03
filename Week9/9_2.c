#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int x;
again:
    printf("Input a positive number: ");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("That is incorrect! \n");
        goto again;
    }

    for (int i = 2; i <= x; i++)
    {
        if (prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}