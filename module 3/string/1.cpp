//1. Write a program in C to find the length of a string
//without using libraryfunctions.
//2. Write a program in C to separate individual characters from a
//string.
//3. Write a program in C to print individual characters of a string in
//reverse order
//4. Write a program in C to count the total number of words in a
//string.
//5. Write a program in C to comp
#include<stdio.h>
int main()
{
	int i=0; int length=0;
	char str[100];
	printf("enter a word : ");
	gets(str);
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	printf("length of string is %d",length);
}
