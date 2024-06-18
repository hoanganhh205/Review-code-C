//Tính tong chu so: Tính tong các chu so cua mot so nguyên duong.
#include<stdio.h>
int tong(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d", tong(n));
}
