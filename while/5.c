#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value:");
	scanf("%d",&n);
	while(n>=x)
	{
		printf("%d ",n);
		n--;
	}
}
