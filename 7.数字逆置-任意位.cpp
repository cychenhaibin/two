#include<stdio.h>

int main(void)
{
	int n;
	printf("������n��");
	scanf("%d", &n);
	printf("��תǰ��%d\n", n);
	
	int m = 0;
	while(n != 0)
	{
//		m = m * 10;		// m = 4 =>m = 40
//		m += n % 10;		// m = 4 => m = 43
		m = m * 10 + n % 10;
		n = n / 10;
	}
	
	printf("��ת��%d", m);
}
