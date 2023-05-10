#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("Enter the value for a and b: ");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("The new value of a is %d and b is %d",a,b);
	return 0;
}
