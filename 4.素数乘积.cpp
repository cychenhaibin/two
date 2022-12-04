#include<stdio.h>

int F(int n)	
{
	if(n <= 1)	return 0;
	
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	return 0;
		
	return 1;
}

int main(void)
{
	/*
		一个合数 n 可以写成素数乘积
		比如：90 = 2*3*3*5 ; 170 = 2*5*17 
	*/
	
	int n;
	scanf("%d", &n);
	
	printf("%d=", n);
	for(int i = 2; n != 1; i++)
	{
		if(n % i == 0 && F(i))
		{
			printf("%d", i);
			n /= i;
			i = 1;
			
			if(n != 1)
				printf("*");
		}
	}
}

