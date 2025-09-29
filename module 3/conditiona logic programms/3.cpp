//WAP to check if the given year is a leap year or not
#include <stdio.h>

int main()
 {
    int year;

    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if(2(year%4==0 && year%100 !=0) || (year%400==0))
    {
    	printf("IT IS LEAP YEAR ");
    	
	}
	else {
		printf("IT IS NOT A LEAP YEAR ");
	}
}
