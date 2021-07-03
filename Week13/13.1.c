#include <stdio.h>
#include <string.h>

int count_space(char *s);

int main(void)
{
    char s[100];
    gets(s);
    printf("%d\n", count_space(s));
    return 0;
}

int count_space(char *s)
{
    int count = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == ' ')
            count++;
    }
    return count++;
}
