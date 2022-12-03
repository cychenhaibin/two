#include<stdio.h>
#include<math.h>

int F(int n)	
{
	if(n <= 1)	return 0;
	
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	return 0;
		
	return 1;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	if(F(n))	printf("%d 是质数\n", n);
	else	printf("%d 不是质数\n", n);
}

