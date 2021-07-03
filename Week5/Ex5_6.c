#include <stdio.h>

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("The number of students in the smallest class is %d\n", n / 7);
    printf("The number of students in the largest class is %d\n", n / 7 + 1);
    printf("The average number of students per class is %.2f\n", n / 7.0);
    printf("The number of classes of above average size is %d\n", n % 7);
    printf("The number of classes of at most average size is %d\n", 7 - n % 7);
    printf("The number of students in classes of larger than average size is %d\n", (n % 7) * (n / 7 + 1));
    printf("The number of classes of exactly average size is %d\n", (n % 7 == 0) ? 7 : 0);
    return 0;
}