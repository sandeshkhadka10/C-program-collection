//program to multiple the matrix of the order [3,2],[2,3]
#include<stdio.h>
int main()
{
	int a[3][2],b[2][3],c[3][3];
	int i=0,j=0,k=0;
	printf("Enter the elements for matrix A: ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\nEnter number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements for matrix B: ");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nEnter number for b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//multiplying
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("\nThe multiplication of the matrix is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
