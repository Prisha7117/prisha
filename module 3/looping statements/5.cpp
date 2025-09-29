//5. WAP to print factorial of given number
#include<stdio.h>
int fact(int num);
int main()
{
printf("Enter a number : ");
scanf("%d",&fact);
printf("Ans will be : %d",fact);
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	int a=fact(num-1);
	int b=num*a;
	
	return b;
}
