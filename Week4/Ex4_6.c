#include <stdio.h>

int main()
{
    int sogio, luong;
    printf("Nhap so gio lam trong tuan: ");
    scanf("%d", &sogio);
    if (sogio > 40)
    {
        luong = (sogio - 40) * 40000 + 40 * 25000;
    }
    else
    {
        luong = sogio * 25000;
    }
    printf("Luong tuan nay la: %d", luong);
    return 0;
}