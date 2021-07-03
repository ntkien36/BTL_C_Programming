#include<stdio.h>
#define N 100

int main(){
    int arr[N];
    int i, sum=0, min=0;
    for(i=0;i<N;i++){
        printf("So thu %d: ", i+1); scanf("%d", &arr[i]);
    }
    //Tinh tong so le
    for(i=0;i<N;i++){
        if(arr[i] % 2 == 1){
            sum+= arr[i];
        }
    }
    printf("\nTong cac so le la %d", sum);
    //Tim gia tri nho nhat
    min = arr[0];
    for(i=1;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nSo nho nhat la %d", min);
    return 0;
}