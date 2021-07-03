#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(void)
{
    char s[100], t[100];
    gets(s);
    gets(t);
    if (strend(s, t) == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

int strend(char *s, char *t)
{
    int i = strlen(s), j = strlen(t);
    while (s[i] == t[j] && i >= 0 && j >= 0)
    {
        if (j == 0)
            return 1;
        i--;
        j--;
    }
    return 0;
}
