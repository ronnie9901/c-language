#include<stdio.h>
int main()
{
int n;
printf(" enter the  size");
scanf("%d",&n);
int a[n],b[n];
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
           	check++;
            b[j]=0;

           }    
     }
 }
	     if(b[i]!=0) 
	    {
	 	b[i]=check;
	    }
        printf("\n");
     for(i=0;i<n;i++)
    {
  
	     if(b[i]!=0)
         {
         printf("%d=%d",a[i],b[i]);
          }
      
    }
}
