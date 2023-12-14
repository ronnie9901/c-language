//3. Write a c program to remove spaces,blanks from a string.
#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	printf(" enter the ");
	gets(a);
	int l=strlen(a);
    
	int i,k;
	
	for(i=0;i<l;i++)
	{
			if (a[i]==' ')
			{
				for(k=i;k<l;k++)
				{
					a[k]=a[k+1];
				}
				i--;
			}
			
	}	
		
	puts(a);
}





