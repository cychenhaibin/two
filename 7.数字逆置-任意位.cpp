#include<stdio.h>

int main(void)
{
	int n;
	printf("请输入n：");
	scanf("%d", &n);
	printf("翻转前：%d\n", n);
	
	int m = 0;
	while(n != 0)
	{
//		m = m * 10;		// m = 4 =>m = 40
//		m += n % 10;		// m = 4 => m = 43
		m = m * 10 + n % 10;
		n = n / 10;
	}
	
	printf("翻转后：%d", m);
}
