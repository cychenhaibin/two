#include<stdio.h>
int main()
{
    int i, n;
    long p = 1;
    printf("please enter n:");
    scanf("%d", &n);
    for (i = 1;i <= n;i++)
    {
        p = p * i;
        printf("%d!=%ld\n", i, p);
    }
    return 0;

}