#include<stdio.h>
main()
{
	 int a=5,b=6;
	int  *ptr=&a;
	int *ptr1=&b;
	
	*ptr=*ptr + *ptr1;
	*ptr1=*ptr-*ptr1;
	*ptr=*ptr-*ptr1;
	
	
	printf(" a %d",*ptr);
	printf(" b %d",*ptr1);
	     
	 

}
