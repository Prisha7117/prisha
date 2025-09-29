//15.Write a C program to determine eligibility for admission to a
//professionalcourse based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55
//and Marksin Chem>=50 and Total in all three subject >=190 or
//Total in Maths and Physics >=140 ---- Input the marks obtained
//in
//Physics :65 Input the marks obtained in Chemistry :51 Input the
//marks obtained in Mathematics :72 Total marks of Maths, Physics
//and Chemistry :188 Total marks of Maths and Physics : 137 The
////candidate is not eligible.
#include<stdio.h>

main()
{
	
	
	int p,c,m;
	printf("Input the marks obtained in Physics : ");
	scanf("%d",&p);
	printf("Input the marks obtained in Chemistry : ");
	scanf("%d",&c);
	printf("Input the marks obtained in Maths : ");
	scanf("%d",&m);
	

			
			int sum=p+c+m;
			int a=p+m;
			printf("Total marks of maths , physics and chemistry : %d\n",sum);
			
			printf("Total marks in maths and physics are : %d\n",a);
			
			
			if(m>=65 && p>=60 && c>=50 &&(sum>=190 || a>=140))
			{
				printf("The student is eligible ");
			}
			else
			{
				printf("The student is not eligible");
	}
			
			
			
			
			
			
			
			
			
			
	}
	
	
	
	
	
	
	
	

