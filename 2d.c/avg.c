#include<stdio.h>
main()
{
	int i,j;
	int n,x,sum=0;
	printf(" enter size of row and column");
	scanf("%d%d",&n,&x);
	int a[n][x];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			printf( "a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{    printf("%d ",a[i][j]);
		  	 sum =sum+a[i][j];
		}
		printf("\n");
	}
	printf(" avg is %d ",sum/(n*x));
}
