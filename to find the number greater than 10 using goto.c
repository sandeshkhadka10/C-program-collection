#include<stdio.h>
int main()
{
	int a=0;
	flag:
	printf("Enter the num: ");
	scanf("%d",&a);
	if(a<=10)
	{
		printf("The number is %d\n",a);
	}
	else
	{
		printf("Sorry try again!\n");
		goto flag;
	}
	return 0;
}
