//8.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	float  c,s;
	printf("Enter cost price of a product : ");
	scanf("%f",&c);
		printf("Enter selling price of a product : ");
	scanf("%f",&s);
	if(s>c)
	{
		printf("PROFIT");
	}
	else
	{
		printf("LOSS");
	}
}
