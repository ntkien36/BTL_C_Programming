#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100], first_name[100];
    gets(name);
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == ' ')
        {
            first_name[i] = '\0';
            break;
        }
        first_name[i] = name[i];
    }
    printf("%s\n", first_name);
}
