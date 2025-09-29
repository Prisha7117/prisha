//23. WAP to calculate swap 2 numbers with using of
//multiplication and division.2
#include<stdio.h>
int main()
{
	int x,y;
		printf("ENTER X : ");
	scanf("%d",&x);
	printf("ENTER Y : ");
	scanf("%d",&y);
	 x=x*y;
	 y=x/y;
	 x=x/y;
	 	printf("x=%d, y=%d",x,y);
	
}
