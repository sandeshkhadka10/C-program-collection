#include<stdio.h>
int main()
{
	int i=0,j=0,m=0,n=0,p=0,q=0,sum=0,k=0;
	int a[10][10],b[10][10],c[10][10];
	printf("Enter the rows and columns for 1st matrix: ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements for 1st matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	flag:
	printf("\nEnter the rows and columns for 2nd matrix: ");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("\nThe multiplication isnot possible");
		goto flag;
	}

	printf("\nEnter the elements for 2nd matrix: ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("\nEnter number for b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<p;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("\nThe product of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
