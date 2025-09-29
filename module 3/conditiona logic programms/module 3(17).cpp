//17.Write a C program to check whether a triangle can be formed
//with the givenvalues for the angles.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first angle of triangle (in degree) : ");
	scanf("%d",&a);
		printf("Enter the second angle of triangle (in degree) : ");
	scanf("%d",&b);
		printf("Enter the third angle of triangle (in degree) : ");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("YES triangle can be formed by given angles ");
	}
	else
	{
		printf("NO triangle can not be formed by given angles");
	}
}
