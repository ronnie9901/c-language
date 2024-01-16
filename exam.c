#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void gmail()
{
	char g[50];
	char a[32];
	FILE *fp;
	fp=fopen("login.txt","w");
	printf("gmail:");
	scanf(" %s",&g);
	char gmail[11]="moc.liamg@";
	int l= strlen(g),j;
	int gmai=0;
	int sepcialChecking=0;
	int upparcaseChecking=0,i;
	int lowercaseChecking=0;
	int numberChecking=0;
	int sepcialCharcterChecking=0;
	printf("password:");
	scanf(" %s",&a);
	int len=strlen(a);
	int k=0;
	if(l>=11)
	{
		for(j=l-1;j>l-11;j--)
		{
			if(g[j]!=gmail[k])
			{
				gmai=1;
			}
           k++;
		}
		if(gmai==0)
		{
			for(j=0;j<l-11;j++)
			{
				if((g[j]>=33 && g[j]<=47)||(g[j]>=58 && g[j]<=64))
				{
					sepcialChecking=1;
				}
			}
			if(sepcialChecking==0)
			{
				fprintf(fp,"gmail= %s\n",g);
				if(len>=8 && len<=32)
				{
					for(i=0;i<=len;i++)
					{
						if(a[i]>=65 && a[i]<=90)
						{
							upparcaseChecking=1;
						}
					}
					if(upparcaseChecking==1)
					{
						for(i=0;i<=len;i++)
						{
							if(a[i]>=97 && a[i]<=122)
							{
								lowercaseChecking=1;
							}
						}
						if(lowercaseChecking==1)
						{
							for(i=0;i<=len;i++)
							{
								if(a[i]>='0' && a[i]<='9')
								{
									numberChecking=1;
								}
							}
							if(numberChecking==1)
							{
								for(i=0;i<=len;i++)
								{
									if((a[i]>=33 && a[i]<=47)||(a[i]>=58 && a[i]<=64))
									{
										sepcialCharcterChecking=1;
									}
								}
								if(sepcialCharcterChecking==1)
								{
									
									fprintf(fp,"password= %s",a);
								}
								else
								{
									printf("enter the special character?");
								}
							}
							else
							{
								printf("enter the number?");
							}
						}	
						else
						{
							printf("enter the lower case?");
						}
					}
					else
					{
						printf("enter the upper case?");
					}
				}
				else
				{
					printf("enter the minimum 8 password & maximum 32 password?");
				}
			}
			else
			{
				printf("enter the not special character?");
			}
		}
	}
	else
	{
		printf("enter the gmail id?");
	}
}
main()
{
	gmail();
}
