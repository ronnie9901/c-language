#include<stdio.h>
main()
{
	char a[10];
	printf("enter the ");
	scanf("%s",&a);
	
	int i;
	for(i=0;i<10;i++)
	{
		if(a[0]>=97&& a[0]<=122)
		{
			a[0]=a[0]-32;
		}
		else if (a[i]>65 && a[i]<90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("%s",a);
}
