//program to find the fibonacci using array
#include<stdio.h>
int main()
{
	int i=0,x[10];
	x[0]=0;
	x[1]=1;
	for(i=2;i<=9;i++)
	{
		x[i]=x[i-1]+x[i-2];
	}
	printf("The fibonacci of the 10 numbers is: ");
	for(i=0;i<=9;i++)
	{
		printf("\t%d",x[i]);
	}
	return 0;
}
