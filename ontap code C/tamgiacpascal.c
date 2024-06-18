//Tam gi�c Pascal: In ra tam gi�c Pascal voi n dong.
#include<stdio.h>
int pascal(int k, int n)
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	else 
	return pascal(k - 1, n - 1) + pascal(k, n - 1);
}
int main ()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int k = 0; k <= i; k++)
		{
			printf("%d ", pascal(k, i));
		}
		printf("\n");
	}
}
