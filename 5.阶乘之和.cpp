#include<stdio.h>

int main(void)
{
	// 1! + 2! + 3! + ... + m!
	
	int n;
	int sum;
	
//	n = 1;
//	sum = 1;
//	while(n != 1)
//	{
//		sum = sum * n;
//		n--;
//	}
//	printf("%d\n", sum);
//	
//	n = 2;
//	sum = 1;
//	while(n != 1)
//	{
//		sum = sum * n;
//		n--;
//	}
//	printf("%d\n", sum);
//	
//	n = 3;
//	sum = 1;
//	while(n != 1)
//	{
//		sum = sum * n;
//		n--;
//	}
//	printf("%d\n", sum);
//	
//	n = 4;
//	sum = 1;
//	while(n != 1)
//	{
//		sum = sum * n;
//		n--;
//	}
//	printf("%d\n", sum);
	
	int m;
	int result = 0;	
	scanf("%d", &m);
	
	for(int i = 1; i <= m; i++)
	{
		n = i;
		sum = 1;
		while(n != 1)
		{
			sum = sum * n;
			n--;
		}
		result += sum;
	}
	
	printf("%d", result);
}
