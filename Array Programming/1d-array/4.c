//program to arrange the numbers in descending order
#include<stdio.h>
int main()
{
	int i=0,j=0,a[10],temp=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter numbe for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The number in descending order is\n ");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
