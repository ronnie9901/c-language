#include<stdio.h>
main()
{
	
	int x=1;
	int n;
	printf("enter the value of");
	scanf("%d",&n);
	
   int f=1;
  

	    st:
		f=f*x;
		x++;
		
		if(x<=n)
		{
	
			goto st;	
		}
		printf("%d",f);
}
