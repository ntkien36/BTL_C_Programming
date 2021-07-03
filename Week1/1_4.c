#include <stdio.h>

int main()
{
    int pick1, pick2;
again:
    printf("Choose a season:\n");
    printf("1. Spring\n");
    printf("2. Summer\n");
    printf("3. Fall\n");
    printf("4. Winter\n");
    printf("Enter your number: ");
    scanf("%d", &pick1);

    if (pick1 == 1)
    {
        printf("\nChoose an activity:\n");
        printf("1. Go swimming\n");
        printf("2. Go camping\n");
        printf("Enter your number: ");
        scanf("%d", &pick2);
        if (pick2 == 1)
            printf("\nBikini\n");
        else
            printf("\nnormal clothes\n");
    }

    else if (pick1 == 4)
    {
        printf("\nChoose an activity:\n");
        printf("1. Go skiing\n");
        printf("2. Go to bed\n");
        printf("Enter your number: ");
        scanf("%d", &pick2);
        if (pick2 == 1)
            printf("\nCoat\n");
        else
            printf("\nSleepwear\n");
    }

    else
    {
        printf("\nUnavailable!!\n");
        goto again;
    }
    return 0;
}