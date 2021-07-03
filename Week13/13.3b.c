#include <stdio.h>

void strcpy(char *s2, char *s1);

int main(void)
{
    char s1[100];
    char s2[100];
    gets(s1);
    strcpy(s2, s1);
    printf("%s\n", s2);
    return 0;
}

void strcpy(char *s2, char *s1)
{
    for (int i = 0; ; i++)
    {
        s2[i] = s1[i];
        if (s2[i] == '\0')
            return;
    }
}
