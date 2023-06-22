//program to find the greatest number using array with function
#include<stdio.h>
int greatest(int[],int);
int main()
{
	int a[100],i=0,n=0,result=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	result=greatest(a,n);
	printf("The greatest number is %d",result);
	return 0;
}
int greatest(int x[],int y)
{
	int gt=0,j=0;
	for(j=0;j<=y-1;j++)
	{
		if(x[j]>gt)
		{
			gt=x[j];
		}
	}
	return gt;
}
