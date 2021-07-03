#include<stdio.h>
#include<stdlib.h>

struct bag
{
    char ten[30];
    float trongLuong, giaTri ,donGia;
    int soLuong;
};

void greedy(bag vat[], int N, float W){
    float sum=0;
    for (int i = 0; i < N; i++) {
        vat[i].soLuong = W / vat[i].trongLuong;
        W -= vat[i].soLuong * vat[i].trongLuong;
        sum += vat[i].soLuong * vat[i].giaTri;
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
            if (vat[i].donGia < vat[j].donGia)
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
    while (fscanf(ofile,"%f %f %s\n",&vat[i].trongLuong , &vat[i].giaTri , &vat[i].ten) != EOF){
        i++;
    }
    fclose(ofile);
    for (int i = 0; i < N; i++){
       vat[i].donGia=vat[i].giaTri/vat[i].trongLuong;
    }
    sort(vat,N);
    greedy(vat,N,(float)W);
    for (int i = 0 ; i < N ; i++){   
        if (vat[i].soLuong!=0){
            printf("%s ",vat[i].ten);
            printf("%d\n",vat[i].soLuong);
        }
    }   
}