//program to copy the word using string handling function
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("Enter the word: ");
	scanf("%s",x);
	strcpy(y,x);
	puts(y);
	return 0;
}
