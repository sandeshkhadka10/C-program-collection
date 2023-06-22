//program to find the fibonacci without array
#include<stdio.h>
int main()
{
	int i=0,a=0,b=1,c=0;
	printf("%d %d",a,b);
	for(i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d",c);
	}
	return 0;
}
