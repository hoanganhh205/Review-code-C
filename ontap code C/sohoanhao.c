// So hoan hao: kiem tra xem mot so nguyen duong n co phai la so hoan hao hay khong (tong cac uoc so cua no bang chinh no).
#include<stdio.h>
int check(int n)
{
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i != n % i)
			{
				sum = sum + i + n/i;
			}
			else sum = sum + i;
		}
	}
	if (sum == n) return 1;
	return 0;
}
int main ()
{
	int n;
	scanf("%d", &n);
	if (check(n)) printf("YES");
	else printf("NO");
}
