#include<stdio.h>
int main()
{
	
	int a;
	printf("enter the value of ");
	scanf("%d",&a);
	
	if(a>0)
	{
		if(a>100)
		{
			printf(" your not human ");
		}
		
		else 
		{
			printf(" enter valid  ");
		}
	}
	else
	{
		 if(a==0)
		 {
		 	printf(" neutral ");
		 }
		 else
		 {
		 	printf(" negetive ");
		 }
	}
}