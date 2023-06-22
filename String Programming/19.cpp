//program to find the factorials of the given number
#include<stdio.h>
int main()
{
	int i=0,n=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
	}
	printf("are the factor of %d",n);
	return 0;
}
