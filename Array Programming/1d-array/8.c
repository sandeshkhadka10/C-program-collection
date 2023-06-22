//program to print the prime,even and odd numbers
#include<stdio.h>
int main()
{
	int i=0,j=0,count=0,a[10];
	for(i=0;i<=9;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	//prime numbers
	for(i=0;i<=9;i++)
	{
		count =0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && a[i]!=0)
		{
			printf("Prime numbers are %d\n",a[i]);
		}
	}
	printf("\n");
	//Even numbers
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			printf("Even numbers are %d\n",a[i]);
		}
	}
	printf("\n");
	//Odd numbers
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==1)
		{
			printf("Odd numbers are %d\n",a[i]);
		}
	}
	return 0;
}
