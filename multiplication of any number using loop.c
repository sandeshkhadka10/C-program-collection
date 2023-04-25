#include<stdio.h>
int main()
{
	int a=0,i=0;
	printf("Enter the num: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",i,a,i*a);
	}
	return 0;
}
