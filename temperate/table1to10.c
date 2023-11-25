#include<stdio.h>
main()
{
	int n,x,i;
	printf("enter the pelimdrom no ");
	scanf("%d",&n);
	for(i=1;i<=10 ;i++)
	{
	
	for(x=1;x<=10;x++)
	{
		printf("%d*%d=%d\n",x,n,x*n);
	}
}
}
