#include<stdio.h>

int F(int m, int n)		// ¼ÆËã m + m+1 + m+2 + ... + m+n 
{
	if(n == m)
		return m;
	else
		return n + F(m, n-1);
}

int main(void)
{
	int m, n;
	scanf("%d,%d", &m, &n);
	printf("%d", F(m, n));
}

