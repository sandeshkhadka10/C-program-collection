//program to convert the lowercase into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	printf("Enter the word: ");
	scanf("%s",x);
	strupr(x);
	printf("%s",x);
	return 0;
}
