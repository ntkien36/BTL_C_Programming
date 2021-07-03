#include<stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Ham dao mang bang con tro
void reverse(int array[], int array_size)
{

    // pointer1 gia tri dau cua mang
    int *pointer1 = array,

        // pointer2 gia tri cuoi cua mang
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2) {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}

// Ham in mang
void print(int* array, int array_size)
{

    int *length = array + array_size, *position = array;
    printf("Array = ");
    for (position = array; position < length; position++)
        printf("%d ",*position);
}

int main()
{
    int array[] = { 2, 4, -6, 5, 8, -1 };
    printf("Day ban dau ");
    print(array, 6);

    printf("\nDay dao nguoc ");
    reverse(array, 6);
    print(array, 6);
    return 0;
}
