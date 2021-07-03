#include <ctype.h>
#include <stdio.h>
#include <string.h>

int check(char *s);

int main(void)
{
    char s[100];
    gets(s);
    if (check(s) == 1)
        printf("Proper\n");
    else
        printf("Not proper\n");
    return 0;
}

int check(char *s)
{
    int n = strlen(s);
    if (n != 7)
        return 0;
    for (int i = 0; i < 2; i++)
    {
        if (isalpha(s[i]) == 0)
            return 0;
    }
    for (int i = 3; i < 7; i++)
    {
        if (isdigit(s[i]) == 0)
            return 0;
    }
    return 1;
}
