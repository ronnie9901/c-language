#include<stdio.h>
main()
{
	int i,j;
	int acc=0;
	int n;
	printf("enter the size ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				acc++;
			}
		}
	
	}	
	printf("%d ",acc);
}
