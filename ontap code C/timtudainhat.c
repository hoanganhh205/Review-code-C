//Tim tu dài nhat: Viet chuong trinh tim tu dai nhat trong mot chuoi ki tu.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], a[101];
    int max = -1e9;
    gets(s);
    char *token= strtok(s," ");
    while(token != NULL)
    { 	
    	int n = strlen(s);
        if( n > max)
	{
            max=n;
            strcpy(a,token);
        }
        token = strtok(NULL," ");
    } 
    printf("%s",a);
}
