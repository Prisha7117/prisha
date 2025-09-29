//36. Write a C program to input electricity unit charges and
//calculate totalelectricity bill according to the given condition:
//For first 50 units Rs.
//0.50/unit For next 100
//units Rs. 0.75/unit For next
//100 units Rs. 1.20/unit For
//unit above 250 Rs.
//1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
main()
{
	float u;
	 float a=0.50*u;
	 	float b= 0.75*u+a;
	printf("Enter the number of units : ");
	scanf("%f",&u);
	if(u<=50)
	{
			
	printf("The amount to be paid is rs : %f",a)	;
	
}
	else if(u<=150 && u>50)
	{
		
		printf("The amount to be paid is rs : %f",b)	;
	}
}

