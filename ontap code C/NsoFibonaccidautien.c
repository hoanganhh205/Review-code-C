// Fibonacci: Viet chuong trinh tinh n so dau tien trong day fibonacci
void check(int n)
{
	long long f0 = 0, f1 = 1, fn;
	for (int i = 0; i < n - 2; i++)
	{
		if (i == 0) printf("%lld ", f0);
		if (i == 1) printf("%lld ", f1);
		fn = f0 + f1;
		printf("%lld ", fn);
		f0 = f1;
		f1 = fn;
	}
}
int main ()
{
	int n;
	scanf("%d", &n);
	check(n);
}
