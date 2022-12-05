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
		如果 n 的除了自身以外的因子之和等于它本身，则 n 为完全数
		比如：6 = 1 + 2 + 3 
	*/
	int n;
	scanf("%d", &n);
	
	if(F(n) == n)
		printf("是完全数");
	else
		printf("不是完全数");
}

