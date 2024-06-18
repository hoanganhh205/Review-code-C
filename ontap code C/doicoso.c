//Ðoi co so: Viet chuong trinh chuyen doi mot so nguyên tu he co so 10 sang he co so 2.
#include<stdio.h>
int main() {
    int a[101], i = 0;
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    while (n != 0) 
    {
        a[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) 
	{
        printf("%d", a[j]);
    }
}
