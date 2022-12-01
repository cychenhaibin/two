#include<stdio.h>

int main(void)
{
	int n = 1234;
	printf("·­×ªÇ°£º%d\n", n);
	
	/*
		1234 % 10 = 4
		1234 / 10 = 123
		
		1234 % 100 = 34
		1234 / 100 = 12
	*/
	
	int a = n % 10;
	int b = (n / 10) % 10;
	int c = (n / 100) % 10;
	int d = (n / 1000) % 10;
	
}
