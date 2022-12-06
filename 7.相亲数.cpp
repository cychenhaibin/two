#include<stdio.h>

int F(int n)	
{
	int sum = 0;
	
	for(int i = 1; i < n; i++)
		if(n % i == 0)
			sum += i;
			
	return sum;
}

int main(void)
{	
	/*
		如果 ： 
			n 除去自身的因子之和等于 m
			m 除去自身的因子之和等于 n 
		则 m 和 n 为相亲数 
		
		比如说： 
			220 的因子和：1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
			284 的因子和：1 + 2 + 4 + 71 + 142 = 220
		
		输出 10000 以内相亲数 
	*/
		
	for(int n = 1; n <= 10000; n++)
		if(n == F(F(n)) && n < F(n))
			printf("%d, %d\n", n, F(n));
}

