#include<stdio.h>

int main(void)
{	
	/*
	(5x10)
		**********
		**********
		**********
		**********
		**********
	*/
	
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");

	int i;
	
//	for(i = 1; i<=10 ;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	
//	for(i = 1; i<=10 ;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//	
//	for(i = 1; i<=10 ;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//	
//	for(i = 1; i<=10 ;i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//	
//	for(i = 1; i<=10 ;i++)
//	{
//		printf("*");
//	}
//	printf("\n");

	int j;
//	for(i = 1; i<=5; i++)
//	{
//		for(j = 1; j<=10 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
	
	
	/*
	(10 x 10)
		**********
		*********
		********
		*******
		******
		*****
		****
		***
		**
		*
	*/
	int t = 10;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10-(i-1); j++)
		{
			printf("*");
		}
		printf("\n");
		t++;
	}
	
	
	
}
