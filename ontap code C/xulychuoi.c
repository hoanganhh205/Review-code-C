//Xu ly chuoi: Viet chuong trinh chuyen doi tat ca c�c ky tu chu c�i trong mot chuoi th�nh chu hoa.
#include <stdio.h>
#include <ctype.h>
int main() 
{
    char s[101];
	gets(s);
    for (int i = 0;i < strlen(s) ; i++) 
	{
        if (islower(s[i])) 
		{
            s[i] = toupper(s[i]);
        }
    }
  	printf("%s", s);
}
