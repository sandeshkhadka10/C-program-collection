#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n=0,i=0;
	printf("How many numbers you want to add: ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=2;i<=n-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d",c);
	}
	return 0;
}
