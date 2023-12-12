#include<stdio.h>
main()
{
	char a[10];
	printf("enter the ");
	scanf("%s",&a);
	
	int i;
	for(i=0;i<10;i++)
	{
		if(a[i]>=97&& a[i]<=122	)
		{
			a[i]=a[i]-32;
			
		}
	}
	printf("%s",a);
	
}
