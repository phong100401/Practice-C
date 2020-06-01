#include<stdio.h>
int main()
{
   int n, t, tong = 0, sodu;

   printf("Nhap so nguyen\n");
   scanf("%d",&n);
   t=n;
   while (t!=0)
   {
      sodu=t%10;
      tong +=sodu;
      t/=10;
   }
   printf("Tong cac chu so %d = %d\n", n, tong);
   return 0;
}
