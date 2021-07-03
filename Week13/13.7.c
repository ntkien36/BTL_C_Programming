#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    gets(s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        switch (s[i])
        {
            case ',': case '.': case ';':
            case ':': case '!': case '?':
                s[i] = ' ';
                break;
            default:
                break;
        }
    }
    printf("%s\n", s);
    return 0;
}
