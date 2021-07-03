#include <stdio.h>

int main()
{
AGAIN:
{
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    if (age > 0)
    {
        if (age < 18)
            printf("A child\n");
        else if (age <= 120 && age >= 65)
            printf("A senior citizen\n");
        else if (age >= 18 && age < 65)
            printf("An adult\n");
        else
            printf("Not a human!!");
    }
    else
    {
        printf("That's not a valid age\n");
        goto AGAIN;
    }
}
    return 0;
}