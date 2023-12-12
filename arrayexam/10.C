#include<stdio.h>
main()
{

	int a[3][3];
	int i,j,sum=0;

	
	 for(i=0;i<3;i++)
	{    for(j=0;j<3;j++)
	{
	
		printf("enter the value of  a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	j=2;
	for(i=0;i<3;i++)
	{
		
			sum=sum+a[i][j];
			j--;
	
	
	}
	printf("sum is %d",sum);
}
