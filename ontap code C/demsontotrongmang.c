//Ðem so nguyên to trong mang: Viet chuong trinh dem so luong so nguyên to trong mot mang so nguyên.
#include<stdio.h>
#include<math.h>
 int nto( int x)
{
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0) return 0;
	}
	return 1;
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0 ; i < n ; i++) scanf("%d", &a[i]);
	for (int i = 0 ; i < n; i++)
	{
	    if ( nto(a[i]) ) 
		printf("%d ", a[i]);
	}
}
	 
