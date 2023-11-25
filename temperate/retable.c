#include<stdio.h>
main()
{
	int n,x;
	printf("enter the pelimdrom no ");
	scanf("%d",&n);
	
	for(x=10;x>=1;x--)
	{
		printf("%d*%d=%d\n",x,n,x*n);
	}
}
