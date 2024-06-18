//So nguoc le: In ra các so le tu n den 1.
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) 
	{
        if (i % 2 != 0) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
}
