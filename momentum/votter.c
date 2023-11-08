#include<stdio.h>

main()
{
	int age;
	printf("enter your valur :");
	scanf("%d",&age);
	if(age>0)
	{
		if(age>18)
		{
			printf(" your  eligible for viting ");
		}
		else
		{
			printf(" your not eligible for votting");
			
		}
	}
	else
	{
		if(age==0)
		{
			printf("your age is neu");
		}
		else
		{
			printf("your age is neg");
		}
	}
	
}