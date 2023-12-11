#include<stdio.h>
int main()
{
int n;
printf(" enter the  size");
scanf("%d",&n);
int a[n];
int i,j;

for(i=0;i<n;i++)
{
printf("enter the a[%d]",i);
scanf("%d",&a[i]);
}
int check;
for(i=0;i<n;i++)
{
   check=1;
      for(j=i+1;j<n;j++)
      {
             if(a[i]==a[j])
           {
            a[j]=-1;

           }    
     } 
   if(a[i]!=-1)
    {
    printf("%d",a[i]);
      }
}
}
