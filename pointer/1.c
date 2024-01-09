#include<stdio.h>
#include<stdio.h>
main()
{
	char a[30];
	gets(a);
	
	char  *ptr =&a;
    int l=0;
    
    while(*ptr!='\0')//rohan
    {
    	l++;
    	ptr++;
    	
    	
	}
	printf(" %d",l);
    
    
	

}
