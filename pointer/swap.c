#include<stdio.h>
main()
{
	 int a=5,b=6;
	int  *ptr=&a;
	int *ptr1=&b;
	
	int *ptr3;
	     ptr3=ptr;
	     ptr=ptr1;
	     ptr1=ptr3;
	     printf(" %d",*ptr);
	     printf(" %d",*ptr1);
	     
	 

}
