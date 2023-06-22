//program to find the odd or even number using ternary operator
#include<stdio.h>
int main()
{
	int a=0;
	printf("Enter the num: ");
	scanf("%d",&a);
	(a%2==0)?printf("It is even"):printf("It is odd");
	return 0;
}
