#include<stdio.h>
main()
{
	char a[10];
	printf("enter the ");
	scanf("%s",&a);
	
	int i ,l=0;
	while(a[l]!= '\0')
	{
		l++;
	}
	for(i=l;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
}
