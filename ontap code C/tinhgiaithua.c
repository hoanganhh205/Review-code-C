//T�nh giai thua: Viet chuong trinh t�nh giai thua cua mot so nguy�n duong n.
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


