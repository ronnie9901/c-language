#include<stdio.h>
struct stu
{
	int rollno,chem, math, phy;
	char name[50];
};
int main()
{
	struct stu s[5];
	char name[100];
 	int i,an;
 	float re;
 	for(i=0; i<5; i++)
 	{
		printf("Enter  name : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("Enter  roll no. : ");
		scanf("%d",&s[i].rollno);
		
		printf("\nEnter the chem_marks : ");
		scanf("%d",&s[i].chem);
		
		printf("\nEnter the maths_marks : ");
		scanf("%d",&s[i].math);
		
		printf("\nEnter the phy_marks : ");
		scanf("%d",&s[i].phy);
	}
 	for(i=0; i<5; i++)
 	{
 		printf("%s",s[i].name);
 		printf("Che  : %d\n",s[i].chem);
 		printf("Math : %d\n",s[i].math);
 		printf("Phy  : %d\n",s[i].phy);
 		an = s[i].chem + s[i].math + s[i].phy;
 		printf("Total : %d\n",an);
 		re = (an*100.0)/300;
 		printf("Per : %.2f%",re);
	}
}