//program to find the number of odd and even number in array
#include<stdio.h>
int main()
{
	int a[10],i=0,o=0,e=0;
	printf("Enter 10 numbers:\n");
	for(i=0;i<=9;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			e++;
		}
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2!=0)
		{
			o++;
		}
	}
	printf("The total number of even and odd in the given number are %d,%d.",e,o);
	return 0;
}
