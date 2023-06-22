//program to find the factorial using recursion
#include<stdio.h>
int fact(int);
int main()
{
	int num=0,result=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	result=fact(num);
	printf("The factorial of the given number is %d",result);
	return 0;
}
int fact(int n)
{
	if(n!=0)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
