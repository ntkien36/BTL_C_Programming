#include <stdio.h>
#include <string.h>

void find_replace(char *s, char c1, char c2);

int main(void)
{
    char s[100], c1, c2;
    scanf("%s %c %c", s, &c1, &c2);
    find_replace(s, c1, c2);
    printf("%s\n", s);
    return 0;
}

void find_replace(char *s, char c1, char c2)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == c1)
            s[i] = c2;
    }
}
