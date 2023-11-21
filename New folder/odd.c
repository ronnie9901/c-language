#include<stdio.h>
main()
{
	
int a=1 ;
int n;
printf(" enter the vaue of odd");
scanf("%d",&n);

do
{
	if (a%2==1)
	{
	  printf("%d",a);

	}	
	 a++;
}while(a<n);
}
