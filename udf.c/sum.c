#include<stdio.h>

void sum( int a[])
{

	int i,sum=0;
	for(i=0;i<5;i++)
	{
	   printf("a[%d]",i);
	   scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{  
	  sum =sum+a[i];
	}
	printf(" sum is %d",sum);
	
}

main()
{   int a[5];
    sum(a);
}
