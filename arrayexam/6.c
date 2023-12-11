#include<stdio.h>
int main()
{
int n;
printf(" enter the  size");
scanf("%d",&n);
int a[n];
int i,j,ch;

      for(i=0;i<n;i++)
     {
         printf("enter the a[%d]",i);
          scanf("%d",&a[i]);
    }
    int x;
   printf(" enter the  size");
   scanf("%d",&x);
 
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        	if(a[i]+a[j]==x)
        	{
        		printf("(%d,%d)",a[i],a[j]);
			}
		}
    }
}
