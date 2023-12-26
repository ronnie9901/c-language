#include<stdio.h>
void cube(int a)
{ int cube ;
	cube =a*a*a;
	printf("%d",cube);
}

main()
{
	int a;
	printf(" enter the value of a:");
	scanf("%d",&a);
	cube(a);
}
