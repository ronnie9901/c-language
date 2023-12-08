#include<stdio.h>
main()
{
	int i,j;
	int n,x;
	printf(" enter size of row and column");
	scanf("%d%d",&n,&x);

	int a[n][x];
	int b[n][x];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			printf( "a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	
	}
	printf("\n");
	printf(" enter size of row and column");
	scanf("%d%d",&n,&x);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			printf( "b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			
		}
	
	}
	
	int c[n][x];	
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
		   c[i][j]=a[i][j]+b[i][j];
			
		}
	
	}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
		  printf(" %d ",c[i][j]);
			
		}
	
	}
	
	
	


	
	
}
