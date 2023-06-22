//program to find the numbers in ascending oder and numbers of odd in it
#include<stdio.h>
int main()
{
	int a[10],i=0,j=0,o=0,temp=0;
	printf("Enter the 10 numbers:\n");
	for(i=0;i<=9;i++)
	{
		printf("Enter the no for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2!=0)
		{
			o++;
		}
	}
	printf("The ascending numbers and total odd numbers are:\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("The total odd numbers are %d",o);
	return 0;
}
