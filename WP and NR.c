#include<stdio.h>
void x(int,int);
int main()
{
	int a=0,b=0;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	x(a,b);
	return 0;
}
void x(int m,int n)
{
	int z=0;
	z=m+n;
	printf("Sum=%d",z);
}
