#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value:");
	scanf("%d",&n);
	int sum=1;
	while(x<=10)
	{
		sum=n*x;
		printf("%d*%d=%d \n",n,x,sum);
		x++;
	}

}
