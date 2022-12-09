#include<stdio.h>

void F()
{
	static int i = 1;
	int j = 2;
	printf("i = %d, j = %d\n", i++, j++);
}

int main(void)
{
	int i = 1;
	
	{
		int i = 2;
		printf("%d\n", i);
	}
	printf("%d\n", i);
	
	F();
	F();
}

