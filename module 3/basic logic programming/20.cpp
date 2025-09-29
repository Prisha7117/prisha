//19.Calculate compound
//interest
//20. Accept monthly salary from the user and deduct 10%
//insurance premium,10% loan installment find out of
//remaining salary.
//21. Accept 2 numbers from user and swap 2 numbers with
//using 3rd variableand without using 3rd variable
//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
//23. WAP to calculate swap 2 numbers with using of
////multiplication and division.

#include<stdio.h>
main()
{
	int monthly;
	printf("ENTER AMOUNT OF MONTHLY SALARY : ");
	scanf("%d",&monthly);
	 int insupre=monthly*0.1;
	 printf("YOUR SaLARY AFTER 10 percent INSURANCE PREMIUM WILL BE :%d\n",insupre);
	 int loan=insupre*0.1;
	 printf("YOUR SaLARY AFTER 10 percent loan installment WILL BE :%d\n",loan);
	 int final=insupre+loan;
	 printf("THE FINAL INCOME AFTER INSURANCE PREMIUM AND LOAN INSTALLMENT IS  : %d\n",monthly-final);
	
	
	
	
}
