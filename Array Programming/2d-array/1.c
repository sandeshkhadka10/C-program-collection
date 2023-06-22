//program to print the numbers in 2d-array
#include<stdio.h>
int main()
{
	int a[3][4],i=0,j=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("Enter number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe 2D array numbers are:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
