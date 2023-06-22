//program to find the fibonacci using array where the input is given by user
#include<stdio.h>
int main()
{
	int x[100],i=0,n=0;
	x[0]=0;
	x[1]=1;
	flag:
	printf("How many numbers you want: ");
	scanf("%d",&n);
	if(n>100)
	{
		printf("Enter the value again");
		goto flag;
	}
	for(i=2;i<=n-1;i++)
	{
		x[i]=x[i-1]+x[i-2];
	}
	printf("The fibonacci series is: ");
	for(i=0;i<=9;i++)
	{
		printf("\t%d",x[i]);
	}
	return 0;
}
