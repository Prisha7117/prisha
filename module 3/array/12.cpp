//12.WAP to accept 5 students name and store it in array
//13.WAP to accept 5 numbers from user and check entered
//number is even or oddusing of array
//14.Perform 2D matrix array
#include<stdio.h>
int main()
{
	char name[5][50];
	printf("ENTER 5  NAMES : ");
	for(int i=0; i<5;i++)
	{
		scanf("%s",&name[i]);
	}
	printf("THE NAMES ARE : \n");
	 for (int i = 0; i < 5; i++)
	  {
        printf("%s\n", name[i]);
    }
	
}
