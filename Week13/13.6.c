#include <stdio.h>
#include <string.h>

int main(void)
{
    char products[5][50] = {
        "TV127  31 inch Television",
        "CD057  CD Player",
        "TA877  Answering Machine",
        "CS409  Car Stereo",
        "PC655  Personal Computer"
    };
    char search[50];
    gets(search);
    for (int i = 0; i < 5; i++)
    {
        if (strstr(products[i], search) != NULL)
        {
            printf("%s\n", products[i]);
        }
    }
    return 0;
}
