#include<stdio.h>
void swap1(int *p,int *q,int *r )
{
    int tmp;
    tmp=*p;
    *p=*q;
    *q=*r;
    *r=tmp;
    return;
}
void swap2(int *p,int *q,int *r,int x,int y,int z)
{
   p=&y;
   q=&z;
   r=&x;
    return;
}
int main()
{
    int x,y,z;
    do {printf("Nhap x,y,z\n");
        scanf("%d%d%d",&x,&y,&z);
    }
    while(x==y && y==z && z==x);
       int *p=NULL;int *q=NULL;int *r=NULL;
       p=&x;q=&y;r=&z;
       printf("x=%d,y=%d,z=%d,p=%p,q=%p,r=%p,*p=%d,*q=%d,*r=%d\n",x,y,z,p,q,r,*p,*q,*r);
       printf("Swapping values of x, y, z:\n");
       swap1(&x,&y,&z);
       printf("x=%d,y=%d,z=%d,p=%p,q=%p,r=%p,*p=%d,*q=%d,*r=%d\n",x,y,z,p,q,r,*p,*q,*r);
       printf("Swapping values of p, q, r:\n");
        p=&y;
        q=&z;
        r=&x;
       printf("x=%d,y=%d,z=%d,p=%p,q=%p,r=%p,*p=%d,*q=%d,*r=%d\n",x,y,z,p,q,r,*p,*q,*r);
       return 0;
}
