//So Armstrong: Kiem tra xem mot so nguyên duong n có phai là so Armstrong hay không.
#include<stdio.h>
#include<math.h>
int main ()
{  
	int n,r,sum=0,t;   
	scanf("%d",&n);  
	t=n;  
	while(n>0)  
	{  
		r=n%10;  
		sum=sum+(r*r*r);  
		n=n/10;  
	}  
	if(t==sum)  
	printf("\nSo da cho la so Armstrong ");  
	else  
	printf("\nSo da cho khong phai la so Armstrong");  
}  
