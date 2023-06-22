//program to find the transpose of the matrix from the sum
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],transpose[3][3];
	int i=0,j=0;
	printf("Enter the elements for A and B matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter the number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
			printf("Enter the number for b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	printf("The sum of the matrix is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	//transpose
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			transpose[i][j]=c[j][i];
		}
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
return 0;
}
