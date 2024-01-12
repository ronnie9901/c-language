//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school

#include<stdio.h>

struct student
{
	  int stu_id;
      char  stu_name[20];
      int stu_age;
      char stu_course [20];
      char  stu_city [20];
      int  stu_standard;
      char stu_school[20];
};
main()
{
	 
	  struct student s[3];
	  char name[20];
	  int i,j;
	  for(i=0;i<3;i++)
	  {
	  	 
	  	 
	       	printf(" enter the   id s[%d]  ",i);
	  	    scanf("%d",&s[i].stu_id);
	  	    
	  	    printf(" enter the  name ");
	  	    scanf(" %[^\n]s",&s[i].stu_name);
	  	     
	       	printf(" enter the  age ");
	  	    scanf("%d",&s[i].stu_age);
	  	    
	  	    printf(" enter the value of  ");
	  	    scanf("%s",&s[i].stu_city );
	  	    
	  	    printf(" enter the course ");
	  	    scanf("%s",&s[i].stu_course );
	  	    
	  	    printf(" enter the    standard  ");
	  	    scanf("%d",&s[i].stu_standard);
	  	    
	  	    printf(" enter the school ");
	  	    scanf("%s",&s[i]. stu_school );
	     
	  }
	  for(i=0;i<3;i++)
	  {
	  	 printf(" %d  id \n",s[i].stu_id);
	  	 printf(" %s name \n" ,s[i].stu_name);
	  	 printf(" %d age\n",s[i].stu_age);
	  	 printf(" %s city\n",s[i].stu_city);
	  	 printf(" %s cou\n",s[i].stu_course);
	  	 printf(" %d standard\n",s[i].stu_standard);
	  	 printf(" %s school\n",s[i].stu_school);
	  	 printf(" \n");
	  	 
	  	 
	  	 
	  }
	 
}
