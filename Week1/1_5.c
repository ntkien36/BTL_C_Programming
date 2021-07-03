
#include <stdio.h>

int main()
{
    int money = 100, option, hok = 0, oki = 0, tok = 0;
    while (money > 0)
    {
        printf("You have $%d. Here are our CDs.\n", money);
        printf("1. $10 - Hokkaido\n");
        printf("2. $20 - Okinawa\n");
        printf("3. $50 - Tokyo\n");
        printf("Pick: ");
        scanf("%d", &option);

        if (option == 1 && money >= 10)
        {
            ++hok;
            money -= 10;
        }

        else if (option == 2 && money >= 20)
        {
            ++oki;
            money -= 20;
        }

        else if (option == 3 && money >= 50)
        {
            ++tok;
            money -= 50;
        }

        else
            printf("Try again!\n");

        printf("\n");
    }
    printf("Bought list: \n");
    printf("1. Hokkaido : %d\n", hok);
    printf("2. Okinawa : %d\n", oki);
    printf("3. Tokyo : %d\n", tok);
}