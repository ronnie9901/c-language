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
    int b[n];
     for(i=0;i<n;i++)
    {
       printf("enter the b[%d]",i);
       scanf("%d",&b[i]);
    }
    int c[n];
      for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
         for(i=0;i<n;i++)
    {
       printf("%d",c[i]);
    }
}
    
