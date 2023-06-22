//program to find the sum of the even number in array using pointer
#include<stdio.h>
int main()
{
	int *p;
	int i=0,n=0,a[100],sum=0;
	p=a;
	printf("Enter the number you wanted: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",(p+i));
		if(*(p+i)%2==0)
		{
			sum=sum+*(p+i);
		}
	}
	printf("Sum of the array of the even number is %d",sum);
	return 0;
}
