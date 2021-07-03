#include <stdio.h>
#include <math.h>

int main()
{
    int check = 1;
    printf("2\n");
    for (int i = 3; i <= 100; i += 2, check = 1)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}