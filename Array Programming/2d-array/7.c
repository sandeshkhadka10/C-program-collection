//program to find the sum of four courners elements
#include<stdio.h>
int main()
{
	int a[3][3],i=0,j=0,sum=0;
	printf("Enter the numbers:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter number for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	sum=a[0][0]+a[0][2]+a[2][0]+a[2][2];
	printf("The sum of four corners elements is %d",sum);
	return 0;
}
