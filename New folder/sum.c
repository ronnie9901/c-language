#include<stdio.h>
main()
{
	int x=1;
	int n;
	int sum=0;
	
  printf(" enter the vaue of odd");
    scanf("%d",&n);	
do
	{
		printf("%d ",x);
		sum=sum+x;
		x++;
		
	}	while(x<=n);
	    printf("\n%d",sum);
}
