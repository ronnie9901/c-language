#include<stdio.h>
main()
{
	int n;
	printf("enter the pelimdrom no ");
	scanf("%d",&n);
	int f;
    int l=n%10;
	while(n>9)
	{
		n=n/10;
	}
	f=n;
	printf("%d+%d=%d",l,f,l+f);
}
