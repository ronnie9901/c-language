#include<stdio.h>

main()
{
	int age;
	printf("enter your valur :");
	scanf("%d",&age);
	if(age>0)
	{
		if(age>100)
		{
			printf("your so older ");
		}
		else
		{
			printf("your age is a posi");
			
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