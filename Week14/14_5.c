#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
void convert();
void multiply_add();

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
        printf("5. Convert a fraction to fraction simple\n");
        printf("6. Multiply, add two fractions (after converting!)\n");
        printf("7. Exit!\n");
        printf("Enter (1~7): ");
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
        case 5:
            convert();
            break;
        case 6:
            multiply_add();
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

void convert()
{
    printf("After converting: \n");
    for (int i = 0; i < n; ++i)
    {
        int k = (abs(ps[i].t) > abs(ps[i].m)) ? abs(ps[i].t) : abs(ps[i].m);
        for (int j = 2; j <= k; ++j)
        {
            if (ps[i].t % j == 0 && ps[i].m % j == 0)
            {
                ps[i].t /= j;
                ps[i].m /= j;
            }
        }

        int check = ps[i].t * ps[i].m;
        if (check > 0)
        {
            ps[i].t = abs(ps[i].t);
            ps[i].m = abs(ps[i].m);
        }
        else if (check < 0)
        {
            ps[i].t = -1 * abs(ps[i].t);
            ps[i].m = abs(ps[i].m);
        }

        printf("fraction %d: %d/%d\n", i + 1, ps[i].t, ps[i].m);
    }

    printf("\nPress any key to continue!!!");
    getch();
}

void multiply_add()
{
    fflush(stdin);
    int a, b, c, tu, mau;
again_3:
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
        goto again_3;
    }
again_4:
    printf("1. Multiply or 2.Add: ");
    scanf("%d", &c);
    switch (c)
    {
    case 2:
        tu = ps[a - 1].t * ps[b - 1].m + ps[b - 1].t * ps[a - 1].m;
        mau = ps[a - 1].m * ps[b - 1].m;
        break;
    case 1:
        tu = ps[a - 1].t * ps[b - 1].t;
        mau = ps[a - 1].m * ps[b - 1].m;
        break;
    default:
        printf("Invaiable!");
        goto again_4;
    }

    printf("The value of that fraction is: %d/%d", tu, mau);

    printf("\nPress any key to continue!!!");
    getch();
}
