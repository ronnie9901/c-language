#include<stdio.h>
main()
{
int n=13281;

int c=0;
for( n;n>0 ;c++)
{
	n=n/10;	
}
printf("%d",c);
}

