//16.Write a C program to read temperature in centigrade and display
//a suitablemessage according to the temperature state below:
//Temp < 0 then Freezing
//weather Temp 0-10 then Very
//Cold weatherTemp 10-20 then
//Cold weather Temp 20-30
//then Normal in Temp Temp
//30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<stdio.h>
main()
{
	float temp;
	printf("Enter temperature in celsius :");
	scanf("%f",&temp);
	if(temp>=40)
	{
		printf("It is very hot");
	}
	else if(temp>30)
	{
		printf("It is hot");
	}
		else if(temp>20)
	{
		printf("It is normal");
	}
		else if(temp>10)
	{
		printf("It is cold");
	}
		else if(temp>0)
	{
		printf("It is very cold");
	}
		else if(temp<0)
	{
		printf("It is freezing1");
	}
}
