#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct
{
    int t;
    int m;
} fraction;

fraction ps[MAX];
int n;

void input();
void print();
void inverse();
void compare();

int main()
{
    int choice;
    for (;;)
    {
        system("cls");
        printf("Pick one of folowing: \n");
        printf("1. Input for an array of fraction\n");
        printf("2. Print the content of the fraction array\n");
        printf("3. Inverse all the fraction in the array\n");
        printf("4. Compare two fraction\n");
        printf("5. Exit!\n");
        printf("Enter (1~5): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input();
            break;
        case 2:
            print();
            break;
        case 3:
            inverse();
            break;
        case 4:
            compare();
            break;
        default:
            return 1;
            break;
        }
    }
}

void input()
{
    fflush(stdin);
    printf("Enter the number of fraction: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
    again_1:
        printf("Enter the fraction %d:\n", i + 1);
        printf("    enter the numerator: ");
        scanf("%d", &ps[i].t);
        printf("    enter the denominator: ");
        scanf("%d", &ps[i].m);
        if (ps[i].t == 0 || ps[i].m == 0)
        {
            printf("Invaiable!\n");
            goto again_1;
        }
    }
}

void print()
{
    fflush(stdin);
    for (int i = 0; i < n; ++i)
    {
        printf("fraction %d: %d/%d\n", i + 1, ps[i].t, ps[i].m);
    }
    printf("\nPress any key to continue!!!");
    getch();
}

void inverse()
{
    fflush(stdin);
    printf("After inversing: \n");
    for (int i = 0; i < n; ++i)
    {
        int tmp = ps[i].t;
        ps[i].t = ps[i].m;
        ps[i].m = tmp;
        printf("fraction %d: %d/%d\n", i + 1, ps[i].t, ps[i].m);
    }
    printf("\nPress any key to continue!!!");
    getch();
}

void compare()
{
    fflush(stdin);
    int a, b;
again_2:
    for (int i = 0; i < n; ++i)
    {
        printf("fraction %d: %d/%d\n", i + 1, ps[i].t, ps[i].m);
    }
    printf("Pick the position of first fraction: ");
    scanf("%d", &a);
    printf("Pick the position of second fraction: ");
    scanf("%d", &b);
    if (a > n || b > n)
    {
        printf("Invaiable!\n");
        goto again_2;
    }

    if (a == b)
    {
        printf("two fractions are equal!\n");
    }
    else
    {
        int com_1 = ps[a - 1].t * ps[b - 1].m;
        int com_2 = ps[b - 1].t * ps[a - 1].m;
        int denominator = ps[a - 1].m * ps[b - 1].m;
        if (com_1 > com_2 && denominator > 0)
        {
            printf("%d/%d is better than %d/%d\n", ps[a - 1].t, ps[a - 1].m, ps[b - 1].t, ps[b - 1].m);
        }
        else if (com_1 < com_2 && denominator > 0)
        {
            printf("%d/%d is less than %d/%d\n", ps[a - 1].t, ps[a - 1].m, ps[b - 1].t, ps[b - 1].m);
        }
        else if (com_1 > com_2 && denominator < 0)
        {
            printf("%d/%d is less than %d/%d\n", ps[a - 1].t, ps[a - 1].m, ps[b - 1].t, ps[b - 1].m);
        }
        else if (com_1 < com_2 && denominator < 0)
        {
            printf("%d/%d is better than %d/%d\n", ps[a - 1].t, ps[a - 1].m, ps[b - 1].t, ps[b - 1].m);
        }
        else
            printf("two fractions are equal!\n");
    }
    printf("\nPress any key to continue!!!");
    getch();
}
