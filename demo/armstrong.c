#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,rem=0,sum=0,original=0,original1=0;
	int i=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	original=num;
	while(original!=0)
	{
		original=original/10;
		i++;
	}
	original1=original;
	for(i=1;i<num;i++)
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
		printf("It is not a armstrong");
	}
	return 0;
}
