#include<stdio.h>
int main()
{
	int matrix[2][3];
	int transpose[3][2];
	int i=0,j=0;
	printf("Enter the elements for matrix: ");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nEnter elements for a[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	//matrix before transpose
	printf("\nThe matrix before transpose is:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	//transpose
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			transpose[i][j]=matrix[j][i];
		}
	}
	//matrix after transpose
	printf("\nThe matrix after transpose is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",transpose[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
