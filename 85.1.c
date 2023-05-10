#include<stdio.h>
#include<math.h>
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
	int rem=0,sum=0,original=0,original1=0,i=0;
	original=a;
	original1=a;
	while(original!=0)
	{
		original=original/10;
		i++;
	}
	for(i=1;i<=a;i++)
	{
		rem=a%10;
		sum=sum+pow(rem,i);
		a=a/10;
	}
	if(sum==original1)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}
