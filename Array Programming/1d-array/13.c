//program to reverse the number
#include<stdio.h>
int main()
{
	int a[10],i=0;
	printf("Enter the 10 numbers:\n");
	for(i=0;i<=9;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Original numbers are:\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Reverse numbers are:\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
