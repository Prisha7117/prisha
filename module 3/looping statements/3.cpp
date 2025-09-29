// WAP to print table up to given numbers 
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		printf("%d",i);
		for(int j=1; j<=i;j++)

{
	printf("%d*%d=%d",i,j,i*j);
	}
		}
}
