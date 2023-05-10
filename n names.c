#include<stdio.h>
int main()
{
	int i=0,n=0;
	char x[10][50];
	printf("How many names you wnat to enter: ");
	scanf("%d",&n);
	printf("\nEnter the name: ");
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter the name of %d: ",i+1);
		gets(x[i]);
	}
	printf("\nThe names are: ");
	for(i=0;i<=n-1;i++)
	{
		gets(x[i]);
	}
	return 0;
}
