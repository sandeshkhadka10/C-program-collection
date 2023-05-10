#include<stdio.h>
void x();
int main()
{
	x();
	return 0;
}
void x()
{
	int a=0,b=0,c=0;
	printf("Enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum=%d",c);

}
