//Hàm de quy Fibonacci: Viet hàm de quy  tính so Fibonacci thu n.
#include <stdio.h>
long long fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}
int  main()
{
    int n;
    scanf("%d", &n);   
    printf("So fibonacci thu %d la %lld", n, fibonaci(n));
}
