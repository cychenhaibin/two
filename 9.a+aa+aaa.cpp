#include<stdio.h>

int main(void)
{
	// a + aa + aaa + aa...a (һ�� n �� a)
	
	int n, a;
	
	printf("������ a��");
	scanf("%d", &a);
	
	printf("������ n��");
	scanf("%d", &n);
	
	int result = 0;		// 1 => 11�� 1 *10 + 1	=> a * 10 + a
	int sum = 0; 
	while(n != 0)
	{
		result = result * 10 + a;
		sum += result;
		n--;
	}
	
	printf("%d", sum);
}
