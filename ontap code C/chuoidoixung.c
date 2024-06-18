//Chuoi doi xung: Kiem tra xem mot chuoi ki tu có phai là chuoi doi xung (palindrome) hay không.
#include<stdio.h>
#include<string.h>
int check(char s[])
{
	int l = strlen(s);
	for(int i = 0; i <= (l - 1)/2; i++)
	{
		if (s[i] != s[l - 1 - i]) return 0;
	}
	return 1;
}
int main ()
{
	char s[51];
	scanf("%[^\n]s", &s);
	if(check(s)) printf("CHUOI PALINDROME");
	else printf("CHUOI KO PALINDROME");
}
