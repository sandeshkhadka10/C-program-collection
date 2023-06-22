//program to add two-dimensional array
#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i=0,j=0;
	printf("Enter the elements for the matrix A and B:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nEnter elements for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
			printf("\nEnter elements for b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe sum of the matrix is:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
