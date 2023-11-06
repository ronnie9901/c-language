#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter the value a,b : ");
	scanf("%d%d",&a,&b,&c);
	
	(a>b)?( a>c)? printf(" a max is "):printf(" c is max") :(b>c)? printf(" b is max"): printf(" c is max");
}