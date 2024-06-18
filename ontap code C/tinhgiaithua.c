//Tính giai thua: Viet chuong trinh tính giai thua cua mot so nguyên duong n.
#include<Stdio.h>
#include<math.h>
long tinhgt(int n)
 {
   if (n > 0) 
   {
      return n * tinhgt(n - 1);
   }
   else 
      return 1;
}
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%lld", tinhgt(n));
}


