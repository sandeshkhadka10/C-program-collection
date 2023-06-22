//progarm to combine two words using funcion
#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("Enter the word: ");
	scanf("%s",x);
	printf("Enter the word: ");
	scanf("%s",y);
	strcat(x , y);
	puts(x);
	return 0;
}
