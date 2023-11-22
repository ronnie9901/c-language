#include<stdio.h>
main()
{
	int a ;
	int n;
	printf(" enter the value of  ");
	scanf("%d",&n);
	
	for(a=10;a>=1;a--)
	{
	    if(a%2==0)
	    {
	    	printf("%d",a);
		}
	}
}
