#include<stdio.h>
int x();
int main()
{
	int result=0;
	result=x();
	if(result==1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0;
}
int x()
{
	int num=0,z=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	z=num%2;
	return z;
	
}
