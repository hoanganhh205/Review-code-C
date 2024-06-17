//Gop mang: Viet chuong trinh gap hai mang da sap xep thành mot mang da sap xep.
#include<stdio.h>
void sapxep(int n, int a[n])
{
	for (int i = 0; i < n; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			if (a[k] < a[i])
			{
				int t = a[i];
					a[i] = a[k];
					a[k] = t;
			}
		}
	}
}
int main ()
{
	int n, m;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	int b[m];
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	int p = m+n;
	int c[p], d = 0;
	for (int i = 0; i < n; i++) c[d++] = a[i];
	for (int i = 0; i < m; i++) c[d++] = b[i];
	sapxep(p,c);
	for (int i = 0; i < p; i++) printf("%d ", c[i]);
}
