#include<stdio.h>

int F(int n)	
{
	int a = 1, b = 1;
	
	for(int i = 3; i <= n; i++)
	{
		a = a + b;
		
		int temp = a;
		a = b;
		b = temp;
	}
	
	return b;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", F(n));
}

