//program to check whether the given number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,rem=0,sum=0,original=0,original1=0,i=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	original=num;
	while(original!=0)
	{
		original=original/10;
		i++;
	}
	original1=original;
	for(i=1;i<=num;i++)
	{
		rem=original%10;
		sum=sum+pow(rem,i);
		original=original/10;
	}
	if(sum==original1)
	{
		printf("It is armstrong");
	}
	else
	{
		printf("It is not armstrong");
	}
	return 0;
}
