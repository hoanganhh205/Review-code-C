//Sap xep mang: Viet chuong trinh sap xep mot mang so nguyên theo thu tu tang dan.
#include<stdio.h>
int main ()
{
	int n;
	int a[100];
	scanf("%d", &n);
	for ( int i = 0; i < n; i++) scanf("%d", &a[i]);
	for ( int i = 0; i < n; i++)
	{
		for ( int k = i + 1; k < n; k++)
		{
			if ( a[k] < a[i] )
			{
				int t = a[i];
					a[i] = a[k];
					a[k] = t;
			}
		}
	}
	for ( int i = 0; i < n; i++) printf("%d ", a[i]);
	
}

