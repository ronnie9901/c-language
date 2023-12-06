#include<stdio.h>
main()
{
	
	int n;
	printf("enter the size of ");
	scanf("%d",&n);
	int a[n];
	int i;
	int min;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of  a[%d]",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}printf(" min is %d",min);
}
