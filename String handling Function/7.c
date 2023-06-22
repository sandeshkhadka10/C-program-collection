//program to convert the uppercase into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	printf("Enter the word: ");
	scanf("%s",x);
	strlwr(x);
	printf("%s",x);
	return 0;
}
