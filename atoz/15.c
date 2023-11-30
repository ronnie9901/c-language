#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(i==7&&(j==3||j==4||j==5)||i==1&&(j==3||j==4))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
