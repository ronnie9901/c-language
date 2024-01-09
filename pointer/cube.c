#include<stdio.h>
void cube( int n ,int x,int a[n][x])
{


	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			printf(" a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
  int *ptr=&a[n][x] ;

	for(i=0;i<n;i++)
	{
		for(j=0;j<x;j++)
		{
			*ptr=a[i][j]*a[i][j];
			 printf("%d ",*ptr);
		}
		
		printf("\n");
	}

}

main()
{

	int n,x;
	printf(" enter size of row and column");
	scanf("%d%d",&n,&x);

	int a[n][x];
    cube(n,x,a);
}
