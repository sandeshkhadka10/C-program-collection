//program to print the sum of the natural number where the value is entered by the user
#include<stdio.h>
int main()
{
	int num=0,i=0,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("The sum of natural number is %d ",sum);
	return 0;
}
