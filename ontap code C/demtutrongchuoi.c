//Ðem tu trong chuoi: Viet chuong trinh dem so tu trong mot chuoi ki tu.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int t = 0;
    gets(s);
    char *token= strtok(s," ");
    while(token != NULL)
    { 	
	    t++;
        token = strtok(NULL," ");
    } 
    printf("%d",t);
}
