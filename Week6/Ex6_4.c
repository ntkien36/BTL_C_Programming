#include <stdio.h>

int main()
{
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    if (age <= 0 || age >= 125)
        printf("That's not a valid age");
    else
    {
        if (age > 0 && age < 18)
            printf("A child\n");
        else if (age > 18 && age < 65)
            printf("An adult\n");
        else
            printf("A senior citizen\n");
    }
    return 0;
}