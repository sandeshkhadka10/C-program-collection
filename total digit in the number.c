#include<stdio.h>
int main()
{
	int a,i=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		i=i+1;
	}
	printf("The total digit in the number is %d",i);
	return 0;
}
