//program to find the sum of the diagonal
#include<stdio.h>
int main()
{
	int i=0,j=0,r=0,c=0,sum=0,a[10][10];
	printf("Enter the no of row: ");
	scanf("%d",&r);
	c=r;
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("\nEnter number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("The sum of the diagonal is %d",sum);
	return 0;
}
