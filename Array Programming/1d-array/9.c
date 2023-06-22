//program to print the 10 numbers using array
#include<stdio.h>
int main()
{
	int a[100];
	int i=0,n=0;
	printf("Enter how many numbers you want to input: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		printf("\nValue of a[%d] is %d",i,a[i]);
	}
	return 0;
}
