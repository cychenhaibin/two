#include<stdio.h>

int F(int a, int b)	
{
	while(b != 0)
	{
		a = a % b;
		
		int temp = a;
		a = b;
		b = temp;
	}
	
	return a;
}

int main(void)
{
	int a, b;
	scanf("%d, %d", &a, &b);
	printf("%d", F(a, b));
}

