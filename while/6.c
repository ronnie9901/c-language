#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value:");
	scanf("%d",&n);
	while(n>=x)
	{
		if( n%2==0)
		{
		printf("%d ",n);
		
    	}
		n--;
	}
	
	
}
