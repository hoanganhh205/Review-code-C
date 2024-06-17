//Tim so lon thu hai: Tim so lon thu hai trong mot mang các so nguyên.
#include<stdio.h>
int main ()
{
	int n, t = -1e9, k = -1e9;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
		if (a[i] > t) t = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if (a[i] != t && a[i] > k) k = a[i];
	}
	printf("%d", k);
}
