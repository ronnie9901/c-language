#include<stdio.h>
main()
{
	int a[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		printf(" a[%d]",i);
		scanf(" %d",&a[i]);
	}
	
	int *max=&a[0];
	
	for(i=0;i<10;i++)
	{
		if(*max < *(max+i))
		{
			*max = *(max+i);
		}
	}
	printf(" %d",*max);
}
