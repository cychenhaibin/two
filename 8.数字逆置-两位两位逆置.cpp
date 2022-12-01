#include<stdio.h>

int main(void)
{
	int n;
	printf("请输入n：");	// 51413121  => 21314151
	scanf("%d", &n);
	printf("翻转前：%d\n", n);
	
	int m = 0;
	while(n != 0)
	{
		m = m*100 + n%100;	// m = 21 => m = 21 * 100 + 31 => m = 2100 + 31
		n = n / 100;	 
	}
	
	printf("翻转后：%d\n", m); 
}
