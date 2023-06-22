//program to find odd and even using function with parameter no return
#include<stdio.h>
void x(int);
int main()
{
	int num=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	x(num);
	return 0;
}
void x(int a)
{
	int result=0;
	result=a%2;
	if(result==1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
}
