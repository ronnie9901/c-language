#include<stdio.h>
#include<string.h>
main()
{
	char a[20] ;
	printf (" enter the ");
	scanf("%d",&a);
	int l=strlen(a);
	int i;
	for(i=1;i<l;i++)
	{
		if(a[i-1]==' ')
		{
			  if(a[i]>=97 && a[i]<=122)
			  {
			  	   a[i]=a[i]-32;
			  }
			  
		}
		else if(a[i]>=65 && a[i]<90)
		{
			 a[i]=a[i]+32;
		}
		else if(a[i]==' ')
		{
			a[i+1]= a[i+1]-32;
		}
		
	}
	puts(a);
	
}
