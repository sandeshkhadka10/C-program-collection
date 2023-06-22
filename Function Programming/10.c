//program to find whether the given number is palindrome or not using function with parameter no return
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
void x(a)
{
	int rem=0,sum=0,original=0;
	original=a;
	while(a>0)
	{
		rem=a%10;
		sum=(sum*10)+rem;
		a=a/10;
	}
	if(original==sum)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
