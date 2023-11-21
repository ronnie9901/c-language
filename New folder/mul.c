#include<stdio.h>
main()
{
	int x=1;
	int n=10;

	
    printf(" enter the vaue of odd");
    scanf("%d",&n);	
   do
	{
		printf("%d*%d=%d\n",x,n,x*n);
		x++;
	
	}	while(x<=10);
	   
}
