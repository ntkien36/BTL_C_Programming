#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", &s);
    char min = s[0];
    for (int i = 0; i < strlen(s); i++)
    {
        if (min > s[i])
            min = s[i];
    }
    printf("The alphabetically first letter is: %c", min);
    return 0;
}