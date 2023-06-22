//program to print the ASCII value of the given word or sentence
#include<stdio.h>
int main()
{
	int i=0;
	char a[100];
	printf("Enter the word: ");
	fgets(a,100,stdin);
	printf("ASCII value of the given character: ");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c=%d",a[i],a[i]);
	}
	return 0;
}
