//program to find the smallest number among 10 numbers
#include<stdio.h>
int main()
{
	int num=0,smallest=999,i=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter the numbers: ");
		scanf("%d",&num);
		if(num<smallest)
		{
			smallest=num;
		}
	}
	printf("The smallest number among them is %d",smallest);
	return 0;
}
