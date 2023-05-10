#include<stdio.h>
int main()
{
	int i=0,n=0;
	char x[50][60];
	printf("How many names you wnat to enter: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nEnter the name: ");
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter the name of %d: ",i+1);
		gets(x[i]);
	}
	printf("\nThe names are: ");
	for(i=0;i<=n-1;i++)
	{
		puts(x[i]);
	}
	return 0;
}
