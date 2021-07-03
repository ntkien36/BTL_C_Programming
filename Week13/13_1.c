#include <stdio.h>
#include <string.h>

int CountSpace(char *arr);

int main(void)
{
    char arr[1000];
    printf("Input: ");
    gets(arr);
    printf("The number of blank: %d", CountSpace(arr));
    return 0;
}

int CountSpace(char *arr)
{
    int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ' || arr[i] == '\t')
            count++;
    }
    return count++;
}