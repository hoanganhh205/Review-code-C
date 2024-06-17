// Kiem tra mot so nguyen duong n co phai la so nguyen to hay khong.
#include<stdio.h>
#include<math.h>
int check (int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
int main ()
{
	int n;
	scanf("%d", &n);
	if (check(n)) printf("YES");
	else printf("NO");
}
