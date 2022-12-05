#include<stdio.h>

void F(int n)	
{
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			printf("%d ", i);
}

int main(void)
{	
	int n;
	scanf("%d", &n);
	
	F(n);
}

