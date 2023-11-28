#include<stdio.h>
main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1; j--)
		{
			if(j%2==0)
			{
				printf("|");
			}
			else
			{
				printf("-");
			}
			
			
		}
		printf("\n");
	}
	
	
}
