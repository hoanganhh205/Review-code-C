// Tim UCLN và BCNN: Viet chuong trinh tim UCLN và BCNN cua hai so nguyên duong.
#include<stdio.h>
long long ucln ( long long a, long long b)
{	long long t;
	while ( a!= 0 )
	{
		t = b % a;
		b = a;
		a = t;
	}
	return a + b;
}
int main ()
{
	long long a, b, k;
	scanf("%lld %lld", &a, &b);
	k = ucln(a, b);
	printf("UCLN LA %lld\n", ucln(a, b));
	printf("BCNN LA %lld", (a * b)/k);
}
