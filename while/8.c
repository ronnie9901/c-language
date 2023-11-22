#include<stdio.h>

int main()
{
	int x=1;
	int n;
	printf("enter your value:");
	scanf("%d",&n);
	while(x<=n)
	{
		if( x%2==1)
		{
		printf("even no.%d ",x);
		
    	}
		x++;
	}
	
	
}
