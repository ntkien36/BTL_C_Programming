#include<stdio.h>

int main(){
    int a,b,c;
    printf("Nhap a,b,c: "); scanf("%d%d%d", &a, &b, &c);
    int *x=&a, *y=&b, *z=&c;
    printf("Gia tri tham chieu den con tro:");
    printf("\nCon tro 1: %d", *x);
    printf("\nCon tro 2: %d", *y);
    printf("\nCon tro 3: %d", *z);
}