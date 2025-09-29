///2. Write a program in C to separate individual characters from a
//string.
//3. Write a program in C to print individual characters of a string in
//reverse order
//4. Write a program in C to count the total number of words in a
//string.
#include<stdio.h>
int main()
{
	char str[200];
	int i=0;
	printf("ENTER THE WORD : ");
	fgets(str,200,stdin);
	while(str[i]!='\0')
	{
		if(str[i] != '\n')
		{
			printf("%c\n",str[i]);
			i++;
		}
	}
}
