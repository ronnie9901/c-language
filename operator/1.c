#include<stdio.h>
main()
{
	int x,y;
	printf(" enter the value of x:");
	scanf("%d",&x);
	printf(" enter the value of y:");
	scanf("%d",&y);
	int ans= (x*x) + (2*x*y)+ (y*y);
	printf("%d",ans);
}