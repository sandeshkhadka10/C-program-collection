//program to find the sum of the 5 numbers in array
#include<stdio.h>
int main()
{
	int i=0,a[5],sum=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter the number for a[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The sum is %d",sum);

	return 0;
}
