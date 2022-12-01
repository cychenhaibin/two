#include<stdio.h>

int main(void)
{
	// a + aa + aaa + aa...a (一共 n 个 a)
	
	int n, a;
	
	printf("请输入 a：");
	scanf("%d", &a);
	
	printf("请输入 n：");
	scanf("%d", &n);
	
	int result = 0;		// 1 => 11： 1 *10 + 1	=> a * 10 + a
	int sum = 0; 
	while(n != 0)
	{
		result = result * 10 + a;
		sum += result;
		n--;
	}
	
	printf("%d", sum);
}
