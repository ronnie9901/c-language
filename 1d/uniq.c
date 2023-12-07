#include<stdio.h>
main()
{
	int i,j;
	
	int n;
	printf("enter the size ");
	scanf("%d",&n);
	int a[n];
	int check=0;
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]==a[j] && (i!=j))
			{
				check=1;
			}
		}
		if(check==0)
	    {
		printf("%d",a[i]);
     	}
	check=0;
	}
	
}
