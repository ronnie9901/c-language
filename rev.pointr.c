#include<stdio.h>
main()
{int n;
	 int a[n];
	 scanf("%d",&n);
	 int *ptr=&a[n-1];
	 int i;
	 for(i=0;i<n;i++)
	 {
	 	printf("enter the value of ");
	 	scanf("%d",&a[i]);
	 }
	 for(i=n-1;i>=0;i--)
	 {
	      printf("%d \n",*ptr);
	      ptr-=1; 
	 }
}
