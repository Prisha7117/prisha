//WAP of Addition, Subtraction, Multiplication and Division
//using Switchcase.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
	float a,b;
	int choice;
	printf("*****MENU*****\n");
	printf("ADDITION (+)\n");
		printf("SUBTRACTION (-)\n");
			printf("MULTIPLICATION (*)\n");
				printf("DIVISION (/)\n");
	printf("ENTER 1 for addition\n");
		printf("ENTER 2 for subtraction\n");
			printf("ENTER 3 for multiplication\n");
				printf("ENTER 4 for division\n");
 printf("ENTER FIRST NUMBER : ");
 scanf("%f",&a);
  printf("ENTER SECOND NUMBER : ");
 scanf("%f",&b);
 
 
 
 
 
 printf("ENTER YOUR CHOICE : ");
 scanf("%d",&choice);
 switch(choice)
 {
 	case 1:
 	printf("%f",a+b);
 	break;
 
 case 2:
 	printf("%f",a-b);
 	break;
 	case 3:
 	printf("%f",a*b);
 	break;
 	case 4:
 	printf("%f",a/b);
 	break;
}
}
