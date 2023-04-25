#include<stdio.h>
int main()
{
	int a,i=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a>0)
	{
		i=i*10+a%10;
		a=a/10;
	}
	printf("The reverse of the number is %d",i);
	return 0;
}
