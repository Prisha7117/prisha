//11.WAP to accept 5 numbers from user and display in reverse
////order using forloop and array
//12.WAP to accept 5 students name and store it in array
//13.WAP to accept 5 numbers from user and check entered
//number is even or oddusing of array
//14.Perform 2D matrix array
#include<stdio.h>
int main()
{
	int array[5];
	
	printf("enter five number : "); 
	for(int i =0; i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the reverse number are :\n");
	for(int i =4;i>=0;i--)
	{
		printf("%d ",array[i]);
	}
	
	
	
}
