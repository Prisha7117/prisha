//21. Accept 2 numbers from user and swap 2 numbers with
//using 3rd variableand without using 3rd variable
#include<stdio.h>
main()
{
	int x,y,z;
	printf("ENTER X : ");
	scanf("%d",&x);
	printf("ENTER Y : ");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("x=%d, y=%d\n",x,y);
	
		printf("ENTER X : ");
	scanf("%d",&x);
	printf("ENTER Y : ");
	scanf("%d",&y);
	 x=x+y;
	 y=x-y;
	 x=x-y;
	 	printf("x=%d, y=%d",x,y);
	
	
	
	
}
