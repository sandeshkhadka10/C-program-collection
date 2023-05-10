#include<stdio.h>
int main()
{
	int i=0,a=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a>0)
	{
		i=i*10+a%10;
		a=a/10;
	}
	printf("The reverse number is %d",i);
	return 0;
}
