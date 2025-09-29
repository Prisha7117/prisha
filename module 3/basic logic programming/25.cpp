//25.Accept 5 expense
//from user and find average of expense
//26.Convert temperature Fahrenheit to
//Celsius27.Convert days into months
//28.Convert years into days and
//months 29.Convert minutes into
//seconds and hours
//30. WAP to convert years into days and days into years
//31. Convert kilometers into meters
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter expense 1 : ");
	scanf("%d",&a);
		printf("enter expense 2 : ");
	scanf("%d",&b);
		printf("enter expense 3 : ");
	scanf("%d",&c);
		printf("enter expense 4 : ");
	scanf("%d",&d);
		printf("enter expense 5 : ");
	scanf("%d",&e);
	int sum=a+b+c+d+e/5;
	printf("YOUR AVG EXPENSE IS : %d",sum);
}
