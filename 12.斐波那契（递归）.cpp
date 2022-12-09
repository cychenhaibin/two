#include<stdio.h>

int F(int n)	
{
	if(n == 1 || n == 2)
		return 1;
	else
		return F(n-1) + F(n-2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		printf("%d ", F(n));
}

