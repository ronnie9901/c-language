#include<stdio.h>
main()
{
	int mo;
	printf(" enter the value of month");
	scanf("%d",&mo);
	
	switch(mo)
	{
		case 1:printf(" january -31");
		break;
		case 2:printf(" fabrury -28");
		break;
		case 3:printf(" march - 31");
		break;
		case 4:printf(" april- 30");
		break;
		case 5:printf(" may - 31");
		break;
		case 6:printf(" june- 30");
		break;
		case 7:printf(" july- 31");
		break;
		case 8:printf(" august- 30");
		break;
		case 9:printf(" saptember- 31");
		break;
		case 10:printf(" octomber- 30");
		break;
		case 11:printf(" november- 31");
		break;
		case 12:printf(" desember- 30");
		break;
		default:printf(" enter the valid asnwer");
	}
}