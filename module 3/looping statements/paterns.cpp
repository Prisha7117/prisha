#include<stdio.h>
main()
{
	// patern 1
  //    ****
//	    ****
//   	****     
//   	****
//  	****


//for(int row=1;row<=5;row++)
//{
//	for(int col=1;col<=4;col++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}

// pattern 2
//*
//* *  
//* * *
//* * * *
//* * * * *
//
//for(int i=1;i<=5;i++)//row
//{
//	
//	for(int j=1;j<=i;j++)//j depend on i as rows and column are same
//	
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//	

// pattern 3
//*****
//*****
//*****
//*****
//*****
// for(int i=1;i<=5;i++)
// {
// 	for(int j=1;j<=5;j++) printf("*");
// 	
// 	printf("\n");
//}


// patern 4
//
//***** //row 1 // col 5
//****//2 // col4
//***//3 //col3
//**//4//2
//*//5  1
//for(int i=5;i>=1;i--)
//{
//	for(int j=1;j<=i;j++)
//	printf("*");
//	
//	printf("\n");
//}



//patern5
//1
//12
//123
//1234
//12345

//for(int i=1;i<=5;i++)
//{
//	for(int j=1;j<=i;j++)
//	printf("%d",j);
//	printf("\n");
//}


//pattern 5
//*
//**
//***
//****
//*****
//****
//***
//**
//*

//  for(int i=1;i<=5;i++)
//  {
//  	
//  	for(int j=1;j<=i;j++)
//  	printf("*");
//  	printf("\n");
//  }
//  for(int i=4;i>=1;i++)
//  {
//  	for(int j=1;j<=i;j++)
//  	printf("*");
//  	printf("\n");
//}


//
//for(int i=1;i<=5;i++)
//{
//	for(int j=1;j<=i;j++)
//	printf("*");
//	printf("\n");
//	
//}
//
//for( int i=4;i>=1;i--)
//{
//	for( int j=1;j<=i;j++)
//	printf("*");
//	printf("\n");
//}
//
//pattern 6

//
//    * //row 1 star1 //4 spaces
//   * * row 2 stars 2 //3
//  * * * row 3 stars 3 //2
// * * * *  row 4 stars 4  //1
//* * * * * row 5 stars 5 //0


//for(int i=1;i<=5;i++)
//{
//	for(int j =1;j<=5-i;j++)
//	{
//		printf(" ");
//	}
//	
//	for(int j=1;j<=i;j++)
//	printf("* ");
//	printf("\n");
//}
//// pattern 7
//* * * * * //0 spaces
// * * * * //1 spaces
//  * * * //2 spaces
//   * * //3 spaces
//    * //4 spaces



 
//for(int i=5;i>=1;i--)
//{
//	for(int j=1;j<=5-i;j++)
//	{
//		printf(" ");
//	}
//	for(int j=1;j<=i;j++)
//	{
//		printf("* ");
//	}
//	printf("\n");
//}

// pattern 7
//        *
//      * *
//    * * *
//  * * * *
//* * * * *



// pattern 8
	
 /*
//**
//***
//****
//*****
//****
//***
//**
//*


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
