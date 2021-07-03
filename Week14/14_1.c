#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date_check;

void input_date(date_check *date);
int date_cmp(date_check *date1, date_check *date2);

int main()
{
    fflush(stdin);
    date_check date1, date2;
    printf("Enter date 1: \n");
    input_date(&date1);
    printf("Enter date 2: \n");
    input_date(&date2);
    printf("%d/%d/%d\n", date1.day, date1.month, date1.year);
    printf("%d/%d/%d\n", date2.day, date2.month, date2.year);

    int check = date_cmp(&date1, &date2);
    if (check)
    {
        printf("%d/%d/%d is ", date1.day, date1.month, date1.year);
        if (check == -1)
        {
            printf("before ");
        }
        else
            printf("after ");
        printf("%d/%d/%d", date2.day, date2.month, date2.year);
    }
    else
        printf("two date are identical : %d/%d/%d", date1.day, date1.month, date1.year);
}

void input_date(date_check *date)
{
again_1:
    printf("Enter the month: ");
    scanf("%d", &date->month);
    if (date->month > 12 || date->month < 1)
    {
        printf("Unsuitable!\n");
        goto again_1;
    }
again_2:
    printf("Enter the year: ");
    scanf("%d", &date->year);
    if (date->year < 0)
    {
        printf("Unsuitable!\n");
        goto again_2;
    }
again_3:
    printf("Enter the day: ");
    scanf("%d", &date->day);
    if (date->month == 2)
    {
        if ((date->year % 4) == 0 && (date->year % 100) != 0 || (date->year % 400) == 0)
        {
            if (date->day < 1 || date->day > 29)
            {
                printf("Invaiable!\n");
                goto again_3;
            }
        }
        else
        {
            if (date->day < 1 || date->day > 28)
            {
                printf("Invaiable!\n");
                goto again_3;
            }
        }
    }
    else if (date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11)
    {
        if (date->day < 1 || date->day > 30)
        {
            printf("Unsuitable!\n");
            goto again_3;
        }
    }
    else
    {
        if (date->day < 1 || date->day > 31)
        {
            printf("Unsuitable!\n");
            goto again_3;
        }
    }
}
int date_cmp(date_check *date1, date_check *date2)
{
    if (date1->year < date2->year)
    {
        return -1;
    }
    else if (date1->year > date2->year)
        return 1;
    if (date1->month < date2->month)
    {
        return -1;
    }
    else if (date1->month > date2->month)
        return 1;
    if (date1->day < date2->day)
    {
        return -1;
    }
    else if (date1->day > date2->day)
        return 1;
    return 0;
}
