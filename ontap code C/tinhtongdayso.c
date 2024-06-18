//Tính tổng dãy số: Viết chương trình tính tổng dãy số từ 1 đến n.
#include <stdio.h>
int main() 
{
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
	{
        t += i;
    }  
    printf("%d\n", t);
    return 0;
}
