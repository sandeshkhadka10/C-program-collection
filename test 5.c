#include<stdio.h>
int main()
{
	int i=0,a[10],num=0,test=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number which position you want to know: ");
	scanf("%d",&num);
	for(i=0;i<=9;i++)
	{
		if(num==a[i])
		{
			test=1;
			printf("%d is number and %d is its position",num,i+1);
		}
	}
	if(test==0)
	{
		printf("Data isnot in the list");
	}
	return 0;
}
