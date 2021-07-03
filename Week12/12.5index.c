#include <conio.h>
#include <stdio.h>


int main()
{
    int A[100];
    int n;
    printf("Nhap vao so luong phan tu cua mang la: ");
    scanf("%d", &n);

    //nhap mang
    for(int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }

    //dao nguoc mang
    for(int i=0; i< n/2; i++)
    {
        int index = n - i - 1;
        int tmp = A[index];
        A[index] = A[i];
        A[i] = tmp;
    }

    //xuat mang
    for(int i=0; i<n; i++)
    {
        printf("%4d", A[i]);
    }
    printf("\n");
    return 0;

}
