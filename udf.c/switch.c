#include<stdio.h>
#include<string.h>

void cal()
{
	 char op;
	 int a,b;
	 printf(" enter the value of op");
	 scanf(" %c",&op);
	 printf(" enter the value of a & b");
	 scanf("%d%d",&a,&b);
	 
	 switch(op)
	 {
	 	 case '+':printf(" %d + %d =%d",a,b,a+b);
	 	 break;
	 	 case '-':printf(" %d - %d =%d",a,b,a+b);
	 	 break;
	 	 case '*':printf(" %d * %d =%d",a,b,a*b);
	 	 break;
	 	 case '/':printf(" %d / %d =%d",a,b,a/b);
	 	 break;
	 	 default : printf("error");
	 	  
	 }
	 
	 
	
	 
	 
}

main()
{
  while(1)
  {
  	cal();
  }
}
