#include<stdio.h>
int x();
int main()
{
	int z=0;
	z=x();
	printf("SUm=%d",z);
	return 0;
}
int x()
{
	int a=0,b=0,c=0;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
