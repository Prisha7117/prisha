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
	float temp;
	printf("ENter temperature in fahrenhit : ");
	scanf("%f",&temp);
	float celsius= temp-32;
	float final=celsius/1.8;
	printf("VALUE OF TEMP IN CELSIUS WILL BE : %f",final);
}
