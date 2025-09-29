//WAP to input the week number and print week day.33
#include<stdio.h>
main()
{
	int day;
	printf("Enter number of day in a week : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1 :
			printf("monday ");
			break;
			case 2 :
			printf("tuesday ");
			break;
		case 3 :
			printf("wednusday ");
			break;
			
		case 4 :
			printf("thursday ");
			break;
				case 5 :
			printf("friday ");
			break;
				case 6 :
			printf("saturday ");
			break;
				case 7 :
			printf("sunday ");
			break;
			
	}
}
