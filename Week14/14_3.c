#include <stdio.h>

typedef struct
{
    char id[6];
    char name[31];
    float grade;
    char classement;
} student;

void input(student *sv);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    student sv[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter student %d: \n", i + 1);
        input(&sv[i]);
        if (sv[i].grade >= 9 && sv[i].grade <= 10)
        {
            sv[i].classement = 'A';
        }
        else if (sv[i].grade >= 8 && sv[i].grade <= 9)
        {
            sv[i].classement = 'B';
        }
        else if (sv[i].grade >= 6.5 && sv[i].grade <= 8)
        {
            sv[i].classement = 'C';
        }
        else
            sv[i].classement = 'D';
    }

    printf("Name              Grade               Classment\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%-19s%-19.1f%c\n", sv[i].name, sv[i].grade, sv[i].classement);
    }
}

void input(student *sv)
{
    fflush(stdin);
    printf("  enter the id: ");
    gets(sv->id);
    fflush(stdin);
    printf("  enter the name: ");
    gets(sv->name);
    fflush(stdin);
    printf("  enter the grade: ");
    scanf("%f", &sv->grade);
}