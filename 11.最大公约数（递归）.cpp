#include<stdio.h>

int F(int a, int b)	
{
	if(b == 0)
		return a;
	else
		F(b, a % b);
}

int main(void)
{
	int a, b;
	scanf("%d, %d", &a, &b);
	printf("%d", F(a, b));
}

