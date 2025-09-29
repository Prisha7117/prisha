//WAP to make addition, Subtraction and multiplication of
//two matrix using2-D Array
//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
	char string[100];
	int length=0;
	printf("ENTER THE STRING : ");
	fgets(string ,100,stdin);
	while(string[length]!='\0' && string[length]!='\n')
	{length++;
	}
	printf("length will be : %d",length);
}
