#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=3; j++)
			{
				if(j==1 && i==4  ||j==4&&j==2|| i==4 && j==3)
				{
					printf(" *");
				}
				else if(i==1)
				{
					printf(" *");
				}
				else if(i==2 && j==3)
				{
					printf("   *");
				}
				else if(i==3 && j==3 || i==5 && j==3)
				{
					printf("  *");
				}
				else if(i==6 && j==3)
				{
					printf("   *");
				}
				else if(i==7 && j==3)
				{
					printf("    *");
				}
				else if(j==1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
}
