#include<stdio.h>
int main()
{
	int i=0,a=0,prod=1;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		prod=prod*i;
	}
	printf("The factorial of %d is %d",a,prod);
	return 0;
}
