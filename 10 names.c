#include<stdio.h>
int main()
{
	int i=0,j=0;
	char x[10][50];
	printf("Enter 2 names: ");
	for(i=0;i<=1;i++)
	{
		printf("\nEnter name for %d: ",i+1);
		scanf("%s",&x[i]);
	}
	printf("\nThe 10 names are: ");
	for(i=0;i<=1;i++)
	{
		printf("%s\n",x[i]);
	}
	return 0;
}
