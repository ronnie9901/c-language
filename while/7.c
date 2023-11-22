#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value:");
	scanf("%d",&n);
	int sum=1;
	while(x<=n)
	{
		sum=sum*x;
		printf("%d ",x);
		x++;
	}
	printf("\nsum is %d",sum);
	
}
