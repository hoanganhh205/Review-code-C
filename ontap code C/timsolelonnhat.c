//Tim so le lon nhat: Tim so le lon nhat trong mat mang so nguyên.
#include<stdio.h>
int main ()
{
	int n, t = -1e9;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > t && a[i] % 2 != 0) t = a[i];
	}
	printf("%d", t);
}
