#include<stdio.h>
#include<string.h>

void cal()
{
	 char op;
	 int a,b;
	 printf(" enter the value of op");
	 scanf(" %c",&op);
	 
	 if(op!='0')
	 {
	 printf(" enter the value of a & b");
	 scanf("%d%d",&a,&b);
    }
	 
	 switch(op)
	 {
	 	 case '1':printf(" %d + %d =%d",a,b,a+b);
	 	 cal();
	 	 break;
	 	 case '2':printf(" %d - %d =%d",a,b,a+b);
	 	 	cal();
	 	 break;
	 	 case '3':printf(" %d * %d =%d",a,b,a*b);
	 	 	cal();
	 	 break;
	 	 case '4':printf(" %d / %d =%d",a,b,a/b);
	 	 	cal();
	 	 break;
	 	 default : printf("error");
	 	 case'0':
	 	 	printf(" end  ");
	 	  
	 }
	 
	 
	
	 
	 
}

main()
{
 
  
  	cal();
  
}
