#include<stdio.h>
int x(int);
int main()
{
	int num=0,result=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	result=x(num);
	if(result==0)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
}
int x(int a)
{
	int z=0;
	z=a%2;
	return z;
}
