//Accept number of students from user. I need to give
//5 apples to eachstudent. How many apples are required
#include<stdio.h>
main()
{
	int s;
	printf("Enter the number of the student : ");
	scanf("%d",&s);
	int i=5*s;
	printf("The number of apples required for students are : %d",i);
	
}
