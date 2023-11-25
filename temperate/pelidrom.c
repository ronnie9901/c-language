#include<stdio.h>
main()
{
	int n;
	printf("enter the pelimdrom no ");
	scanf("%d",&n);
	int a=0,r;
    int b=n;  
	while(n>0)
	{
		r=n%10;
		a=r+(a*10);
		n=n/10;
	}
	if(a==b)
	{
	printf(" its pelidrom");	
	}
	else
	{
		printf(" not pelidrom");
	}
}
