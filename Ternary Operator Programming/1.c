//program to find the greater number between two numbers using ternary operator
#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	(a>b)?printf("A is greater"):printf("B is greater");
	return 0;
}
