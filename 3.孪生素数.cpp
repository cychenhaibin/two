#include<stdio.h>
#include<math.h>

#define M 1000

int F(int n)	
{
	if(n <= 1)	return 0;
	
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	return 0;
		
	return 1;
}

int main(void)
{
	// ��ӡ M ���ڵ��������� 
	
	for(int i = 1; i <= M; i++)
		if(F(i) && F(i+2))	
			printf("%d, %d\n", i, i+2);	
}

