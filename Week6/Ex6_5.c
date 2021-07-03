#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((int)time(0));
    int RandNumber = rand() % 10 + 1;
    int n, dem = 0;
AGAIN:
{
    printf("Enter the number (1 - 10): ");
    scanf("%d", &n);
    if (n == RandNumber)
    {
        printf("Exactly\n");
        dem++;
        printf("%d times!!", dem);
    }
    if (n > RandNumber)
    {
        printf("High!!");
        dem++;
        goto AGAIN;
    }
    if (n < RandNumber)
    {
        printf("Low!!");
        dem++;
        goto AGAIN;
    }
}
    return 0;
}