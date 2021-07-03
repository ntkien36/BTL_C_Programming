#include <stdio.h>

int salary(int hours);

int main()
{
    int hours;
again:
    printf("Input the number of hours: ");
    scanf("%d", &hours);
    if (hours < 10 || hours > 65)
    {
        printf("Invalid number of hours\n");
        goto again;
    }
    printf("The salary is %d VND\n", salary(hours));
}

int salary(int hours)
{
    if (hours <= 40)
        return 15000 * hours;
    else
        return 15000 * 40 + 15000 * 1.5 * (hours - 40);
}