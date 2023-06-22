//program to copy the word without using string handling function
#include<stdio.h>
int main()
{
	char x[50],y[50];
	int i=0;
	printf("Enter the word: ");
	scanf("%s",x);
	for(i=0;x[i]!='\0';i++)
	{
		y[i]=x[i];
	}
	puts(y);
	return 0;
}
