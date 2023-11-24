#include<stdio.h>
 main()
{

  int r,n=1,sum=0;
  
  for(n=1;n<=28;n++)
  {
  	if(n % 2 == 0)
  	{
  		sum = sum + n;		
	}

  }
  
  printf("\nThe sum of all even number is  : %d",sum);
  
	  
  
}
