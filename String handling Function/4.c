//program to compare two words using string handling function
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	int z=0;
	printf("Enter the 1st word: ");
	scanf("%s",x);
	strlwr(x);
	printf("Enter the 2nd word: ");
	scanf("%s",y);
	strlwr(y);
	z=strcmp(x,y);
	if(z==0)
	{
		printf("Both alphabet are same");
	}
	else if(z>0)
	{
		printf("2nd alphabet comes first");
	}
	else
	{
		printf("1st alphabet comes first");
	}
	return 0;
}
