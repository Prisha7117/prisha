//.WAP to find maximum number among 3 numbers using
//ternary operator
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter first number : ");
	scanf("%d\n",&a);
		printf("Enter second number : ");
	scanf("%d\n",&b);
		printf("Enter third number : ");
	scanf("%d\n",&c);
  (a > b) 
            ? (printf("%d is bigger ",a);(a > c) ? a : c) 
            : ((b > c) ? b : c);
	}
