#include<stdio.h>

int main(void)
{
	int n;
	printf("������n��");	// 51413121  => 21314151
	scanf("%d", &n);
	printf("��תǰ��%d\n", n);
	
	int m = 0;
	while(n != 0)
	{
		m = m*100 + n%100;	// m = 21 => m = 21 * 100 + 31 => m = 2100 + 31
		n = n / 100;	 
	}
	
	printf("��ת��%d\n", m); 
}
