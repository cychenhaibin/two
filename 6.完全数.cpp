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
		��� n �ĳ����������������֮�͵����������� n Ϊ��ȫ��
		���磺6 = 1 + 2 + 3 
	*/
	int n;
	scanf("%d", &n);
	
	if(F(n) == n)
		printf("����ȫ��");
	else
		printf("������ȫ��");
}

