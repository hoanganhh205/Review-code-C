//Ðao nguoc so: Nhap mot so nguyên và in ra so dó sau khi da dao nguoc các chu so.
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
