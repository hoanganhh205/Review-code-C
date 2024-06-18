//In hinh chu nhat rong: Viet chuong trinh in ra hinh chu nhat rong voi chieu dài và chieu rong cho truoc.
#include<stdio.h>
int main () 
{
    int a, b;
    scanf("%d%d", &a, &b);
    for ( int i = 0 ; i <= b-1 ; i++)
    {
        for ( int j = 0 ; j <= a-1 ; j++)
        {
            if ( i == 0 || i == b-1 || j == 0 || j == a-1) printf("*"); else printf(" ");
        } printf("\n");
    }
}
