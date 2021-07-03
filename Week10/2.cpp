#include<stdio.h>

int main(){
    int N, sum=0;
    printf("Nhap so phan tu: "); scanf("%d", &N);
    int arr[N], i;
    for(i=0;i<N;i++){
        printf("So thu %d: ", i+1); scanf("%d", &arr[i]);
    }
    for(i=1;i<N-1;i++){
        if( (arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            sum+= arr[i];
        }
    }
    printf("Tong cac sp cuc dai cuc bo la %d", sum);
    return 0;
}