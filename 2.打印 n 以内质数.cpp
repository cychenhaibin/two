#include<stdio.h>
#include<math.h>

int F(int n)	
{
	if(n <= 1)	return 0;
	
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	return 0;
		
	return 1;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(F(i))
		{
			printf("%d\t", i);
			count++;
		}
			
		if(count == 5)
		{
			printf("\n");
			count = 0;
		}
			
	}

}

