#include <stdio.h>

typedef struct weather
{
    int total_railfall;
    int high_temp;
    int low_temp;
    int average_temp;
} Weather;

void input(Weather *month);

int main()
{
    Weather month[12];
    for (int i = 0; i < 12; ++i)
    {
        fflush(stdin);
        printf("Enter data %d:\n", i + 1);
        input(&month[i]);
    }

    float average_railfall;
    int total_railfall = 0;
    int hightest_temp = month[0].high_temp;
    int lowest_temp = month[0].low_temp;

    for (int i = 0; i < 12; ++i)
    {
        total_railfall += month[i].total_railfall;
        hightest_temp = (hightest_temp < month[i].high_temp) ? month[i].high_temp : hightest_temp;
        lowest_temp = (lowest_temp < month[i].low_temp) ? month[i].low_temp : lowest_temp;
    }

    average_railfall = (float)total_railfall / 12;

    printf("the average rain fall: %.2f\n", average_railfall);
    printf("total rainfall of the year: %d\n", total_railfall);
    printf("the highest temperatures for the year: %d\n", hightest_temp);
    printf("the lowest temperatures for the year: %d\n", lowest_temp);
}

void input(Weather *month)
{
    printf("Enter the Total Rainfall: ");
    scanf("%d", &month->total_railfall);
again_1:
    printf("Enter the High Temperature: ");
    scanf("%d", &month->high_temp);
    if (month->high_temp < -40 || month->high_temp > 50)
    {
        printf("Invaiable!\n");
        goto again_1;
    }
again_2:
    printf("Enter the Low Temperature: ");
    scanf("%d", &month->low_temp);
    if (month->low_temp < -40 || month->low_temp > 50)
    {
        printf("Invaiable!\n");
        goto again_2;
    }
again_3:
    printf("Enter the Average Temperature: ");
    scanf("%d", &month->average_temp);
    if (month->average_temp < -40 || month->average_temp > 50)
    {
        printf("Invaiable!\n");
        goto again_3;
    }
}