#include<stdio.h>

void F(int n, char x = 'x', char y = 'y', char z = 'z')	
{
	static int i = 1;
	
	if(n == 1)
	{
		printf("%d¡¢ %c -> %c\n", i++, x, z);
		return;
	}
		
	
	F(n-1, x, z, y);
	printf("%d¡¢ %c -> %c\n", i++, x, z);
	F(n-1, y, x, z);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	F(n);
}

