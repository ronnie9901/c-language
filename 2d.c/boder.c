#include<stdio.h>
main()
{
	int i,j,k=2;
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
		{   
	
		  	 if(i==0||i==4||j==0||j==4)
			{printf("%d ",a[i][j]);
			   sum =sum+a[i][j];
		    }
		    else
		    {
		    	printf("  ");
			}
		    
			 
		}
		printf("\n");
	}
	printf(" sum is %d ",sum);
}

