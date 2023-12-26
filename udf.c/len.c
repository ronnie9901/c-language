#include<stdio.h>
#include<string.h>

void len(char a[])
{
   int l=strlen(a);
   printf("%d",l);
   	
}

main()
{
  char name[10] = "rohannmnn";
  len(name);
}
