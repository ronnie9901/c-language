#include<stdio.h>
main()
{
    int s,hr,da,ta;
    printf(" enter the value of ");
    scanf("%d",&s);
    
    hr=s*10/100;
    da=s*5/100;
    ta=s*8/100;
    int  gs=s+hr+ta+da;
    
    printf(" gross salary %d",gs);
}