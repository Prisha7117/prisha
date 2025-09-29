//WAP to make addition, Subtraction and multiplication of
//two matrix using2-D Array
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("ENTER THE NUMBER OF ROWS AND COLUMNS : ");
	scanf("%d %d",&r,&c);
	int mat1[r][c] , mat2[r][c],sum[r][c], diff[r][c];
	printf("ENTER ELEMENTS OF FIRST MATRIX :");
	
	for(int i=0;i<r;i++)
	{
			for(int j=0;j<c;j++)
			
	{
			scanf("%d",&mat1[i][j]);
	}
	

	}
	
	printf("ENTER ELEMENTS OF second MATRIX :");
	
		for(int i=0;i<r;i++)
	{
			for(int j=0;j<c;j++)
			
	{
			scanf("%d",&mat2[i][j]);
	}
	

	}
	for(int i=0;i<r;i++)
	{
		for(int j=0; j<c;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
			diff[i][j]= mat1[i][j]-mat2[i][j];
		}
	}
	
		for(int i=0;i<r;i++)
	{
		for(int j=0; j<c;j++)
		{
		printf("addition will be : %d",sum[i][j]);
		}
		printf("\n");
	}
	
	
	
		for(int i=0;i<r;i++)
	{
		for(int j=0; j<c;j++)
		{
		printf("subtration will be : %d",diff[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
return 0;

}
