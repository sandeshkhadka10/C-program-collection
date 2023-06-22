//program to find the sum of natural number using recursion
#include<stdio.h>
int sum(int);
int main()
{
	int num=0,result=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	result=sum(num);
	printf("The sum is %d",result);
	return 0;
}
int sum(int n)
{
	if(n!=0)
	{
		return n + sum(n-1);
	}
	else
	{
		return n;
	}
}
