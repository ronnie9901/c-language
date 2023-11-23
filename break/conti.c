#include<stdio.h>
main()
{
	
	int x;
	int y;
	printf("enter the value ");
	scanf("%d",&y);
	
	for(x=1;x<=10 ;x++)
	{
	
		if(x==y)
		{
			continue;
		}
		printf("%d ",x);
	}
}
