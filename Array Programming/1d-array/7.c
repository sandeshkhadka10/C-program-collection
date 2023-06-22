//program to find the postion of the number in the array
#include<stdio.h>
int main()
{
	int i=0,num=0,test=0,a[10];
	for(i=0;i<=9;i++)
	{
		printf("Enter no for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter number of which position do you want to find: ");
	scanf("%d",&num);
	for(i=0;i<=9;i++)
	{
		if(num==a[i])
		{
			test=1;
			printf("\n%d is present in %d position",num,i+1);
		}
	}
	if(test=0)
	{
		printf("No data found");
	}
return 0;
}
