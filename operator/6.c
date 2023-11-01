#include<stdio.h>

void main()
{
	int x,y;
	printf("enter your value:");
	scanf("%d%d",&x,&y);
	int ans;
	ans=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
	printf("ans is a:%d",ans);
	
	
	
}