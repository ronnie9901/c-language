#include<stdio.h>
main()
{
	int  st=1;
	int end=50;
	// 2+3+5+7
	
	int sum=0 ;
	start:
	if  (st<=end)
	{
		st++;
		if (st%2!=0 && st%3!=0 && st%5!=0 && st%7!=0 || st==2 || st==3 || st==5 ||st==7)
		{
			
			printf(" %d",st);
			sum=sum+st;
		}
		goto start;
	}
	printf(" sum is %d\n",sum);
}
