#include<stdio.h>
main()
{
	char i,j,x=65;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i; j++)
		{
			printf("%c",x);
			x++;
			
		}
		
		printf("\n");
	}
}
