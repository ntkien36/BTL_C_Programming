#include <stdio.h>
#include<math.h>

int main()
{
    FILE *f1, *f2;
    int n, k;

    f1 = fopen("TOHOP.INP", "r");
    f2 = fopen("TOHOP.OUT", "w+");

    while (fscanf(f1, "%d %d\n", &n, &k) != EOF)
    {
        int kq =(gt(n))/((gt(k))*(gt(n-k)));
        fprintf(f2, "%d\n", kq);
    }

    fclose(f1);
    fclose(f2);
}
int gt(int a) //ham giai thua
{ int giaithua=1;
  for(int i=1;i<=a;i++){
    giaithua=giaithua*i;
  }
  return giaithua;
}
