#include<stdio.h>
main()
{
	
	int n;
	printf("enter the size of ");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of  a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]<0)
	    {
	    	printf("%d",a[i]);
		}
	}
}
