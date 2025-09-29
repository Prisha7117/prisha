//1. Write a program to find out the max number from given array
//using function
//2. WAP of Addition, Subtraction, Multiplication and Division
//using Switchcase.(Must Be Menu Driven)
//3. WAP to find reverse of string using recursion
//4. WAP to find factorial using recursion
//5. WAP to take two Array input from user and sort them
//in ascending ordescending order as per user’s choice




#include<stdio.h>
int fact(int num);
int main()
{
	int num;
	printf("enter the number : ");
	 scanf("%d",&num);
	 printf("ans is : %d",fact(num));
	 
	 return 0;
}
	
	int fact(int num)
	{
		if(num==0){
			return 1;
		}
		int a=fact(num-1);
		int b=a*num;
		
		return b;
		
		
	}
