#include<stdio.h>
int main()
{
	int num=0,rem=0,sum=0,original=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	original=num;
	while(num>0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(original==sum)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}
