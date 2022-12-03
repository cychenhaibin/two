#include <stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++){
		if(n%i==0)
		sum+=i;
	}
	if(sum/2==n)       //注意sum要/2！！！
	printf("Yes\n");
	else printf("No\n");
	return 0;
}
