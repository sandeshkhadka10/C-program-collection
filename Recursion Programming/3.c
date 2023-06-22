//program to find the fibonacci of the number using recursion
#include<stdio.h>
int fib(int);
int main()
{
	int n=0,i=0,result=0;
	printf("Enter the num: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		result=fib(i);
		printf("\n%d",result);
	}
	return 0;
}
int fib(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fib(num-1) + fib(num-2);
	}
}
