//�ao nguoc so: Nhap mot so nguy�n v� in ra so d� sau khi da dao nguoc c�c chu so.
#include<stdio.h>
#include<string.h>
int main ()
{
	char s[100001];
	gets(s);
	for(int i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
