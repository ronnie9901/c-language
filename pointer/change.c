#include<stdio.h>
void inc(int *ptr)
{
	*ptr=*ptr-1;
}
main()
{
	int a;
	printf(" enter the value of ");
	scanf("%d",&a);
	int *ptr=&a;
	inc(ptr);
	printf("%d",*ptr);
	
}
