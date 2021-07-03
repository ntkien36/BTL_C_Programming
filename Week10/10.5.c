#include<stdio.h>
int dem0(int a[],int n){
int s=0;
for(int i=0;i<=n;i++){
if (a[i]==0){
s++;}
}
return s;
}
int length0(int a[],int n){
int i;
    int count = 0;
    int tmp = 0;
    for(i=0;i<n;i++){
        if(a[i] == 0){
            count++;
        }
        if(a[i] != 0){
            if(tmp < count){
                tmp = count;
                count = 0;
            }
        }
    }
    printf("do dai day 0 la %d\n",tmp);
    }
void solanxuathien(int a[],int n){
const int MAX = 100;
int lan[MAX];
for(int i = 0;i < MAX; i++) lan[i] = 0;
    for(int i = 0; i < n;i++){
        lan[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(lan[i] > 0){
           printf( "Gia tri  %d  xuat hien %d lan\n",i,lan[i]);
        }
    }
    }
int main(){
int a[100],i,n,s;
printf("nhap n=");
scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        s=dem0(a,n);
        printf("so chu so 0 la %d\n",s);
        length0(a,n);
        solanxuathien(a,n);
        return 0;

}
