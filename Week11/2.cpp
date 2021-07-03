#include<stdio.h>

void hexa(int N){
    int i=7,j;
    char a[8];
    for(j=0;j<8;j++){a[j]=48;}
    while (N!=0)
    {
        int n= N%16;
        if(n>9){
            n%=10;
            if(n==0){a[i]='A';}
            if(n==1){a[i]='B';}
            if(n==2){a[i]='C';}
            if(n==3){a[i]='D';}
            if(n==4){a[i]='E';}
            if(n==5){a[i]='F';}
        }else{a[i]=n+48;}
        N/=16; i--;
    }
    for(j=0;j<8;j++){printf("%c",a[j]);}
}

int main(){
    int N;
nhap: printf("Nhap so phan tu (>=5): "); scanf("%d", &N);
    if(N<5){goto nhap;}
    int arr[N], i;
    for(i=0;i<N;i++){
        printf("So thu %d: ", i+1); scanf("%d", &arr[i]);
    }
    printf("Dang hexa cua 5 phan tu dau: ");
    for(i=0;i<5;i++){
        int *a=&arr[i];
        printf("\n");
        hexa(*a);
    }
}