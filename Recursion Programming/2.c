//program to find the power of the given number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
	int base=0,exponent=0,result=0;
	printf("Enter the value of base and exponent: ");
	scanf("%d%d",&base,&exponent);
	result=power(base,exponent);
	printf("%d^%d=%d",base,exponent,result);
	return 0;
}
int power(a,b)
{
	if(b==0)
	{
		return 1;
	}
	else
	{
		return a * power(a,b-1);
	}
}
