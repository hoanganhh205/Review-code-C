//Chu so lon nhat: Tim chu so lon nhat trong mot so nguyên duong.
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, max;
    scanf("%d", &n);
    while(n != 0)
    {
        i = n%10;
        if (i>max)
        {
            max=i;    
        }
        n = n / 10;
    }
    printf("\nChu so lon nhat la: %d",max);
}
