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
		��� �� 
			n ��ȥ���������֮�͵��� m
			m ��ȥ���������֮�͵��� n 
		�� m �� n Ϊ������ 
		
		����˵�� 
			220 �����Ӻͣ�1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
			284 �����Ӻͣ�1 + 2 + 4 + 71 + 142 = 220
		
		��� 10000 ���������� 
	*/
		
	for(int n = 1; n <= 10000; n++)
		if(n == F(F(n)) && n < F(n))
			printf("%d, %d\n", n, F(n));
}

