//program to check whether the given number is prime or not
#include<stdio.h>
int main()
{
	int i=0,j=0,num=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			j++;
		}
	}
	if(j==2)
	{
		printf("It is prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
	return 0;
}
