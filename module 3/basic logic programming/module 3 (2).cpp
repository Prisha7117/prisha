#include<stdio.h>
int sum( int num1 , int num2);
int subtraction ( int num1,  int num2 );
int multiple (int num1, int num2);
int divide(int num1, int num2);

int main()
{
	int num1,num2;
	printf("enter number 1 : ");
	scanf("%d",&num1);
	printf("enter number 2: ");
	scanf("%d",&num2);
	
	printf(" press 1 for +\n press 2 for - \n press 3 for * \n press 4 for / \n ");
	
	int i;
	printf("enter you choice :");
	scanf("%d",&i);
	
	switch(i)
	{
	
	case 1:
	sum(num1, num2);
	break;
	case 2:
	subtraction(num1, num2);
	break;
	case 3:
	multiple(num1, num2);
	break;
	case 4:
	divide(num1, num2);
	break;
		
}
}




int sum(int num1, int num2)
{
	printf("sum is : %d",num1+num2);
}
int subtraction ( int num1,  int num2 )
{
		printf("subtract  is : %d",num1-num2);
}
int multiple (int num1, int num2)
{
		printf("multiple is : %d",num1*num2);
}
int divide(int num1, int num2)
{
		printf("divide is : %d",num1/num2);
}

