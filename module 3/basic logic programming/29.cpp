//29.Convert minutes into
//seconds and hours
//30. WAP to convert years into days and days into years
//31. Convert kilometers into meters



#include<stdio.h>
main()
{
	float min;
	printf("ENTER THE NUMBER OF minutes : ");
	scanf("%f",&min);
	float seconds=min*60;
	float hours=min/60;
	printf("THE number of secnds are :%f\n ",seconds);
	
	printf("THE NUMBER OF HOURS ARE : %f",hours);
	
}
