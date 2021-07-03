#include<stdio.h>
#include<stdlib.h>

struct bag
{
    char ten[30];
    float trong_luong, gia_tri ,don_gia;
    int so_luong;
};

void greedy(bag vat[], int N, float W){
    float sum=0;
    for (int i = 0; i < N; i++) {
        vat[i].so_luong = W / vat[i].trong_luong;
        W -= vat[i].so_luong * vat[i].trong_luong;
        sum += vat[i].so_luong * vat[i].gia_tri;
    }
    printf("%2.0f\n",sum);
}

void swap(bag &x,  bag &y){
    bag tmp = x;
    x = y;
    y = tmp;
}

void sort(bag vat[], int N){
    for(int i = 0; i <= N - 1; i++){
        for(int j = i + 1; j <= N; j++){
            if (vat[i].don_gia < vat[j].don_gia)
            swap(vat[i], vat[j]);
        }
    }
}

int main(){
    int N,W,i;
    struct bag vat[4];
    i=0;
    FILE *ofile;
    ofile=fopen("BAG.INP","r");
    fscanf(ofile,"%d %d\n",&N,&W);
    while (fscanf(ofile,"%f %f %s\n",&vat[i].trong_luong , &vat[i].gia_tri , &vat[i].ten) != EOF){
        i++;
    }
    fclose(ofile);
    for (int i = 0; i < N; i++){
       vat[i].don_gia=vat[i].gia_tri/vat[i].trong_luong;
    }
    sort(vat,N);
    greedy(vat,N,(float)W);
    for (int i = 0 ; i < N ; i++){   
        if (vat[i].soLuong!=0){
            printf("%s ",vat[i].ten);
            printf("%d\n",vat[i].so_luong);
        }
    }   
}
