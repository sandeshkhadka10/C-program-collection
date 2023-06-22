//program to print the ASCII value of a to z
#include<stdio.h>
int main()
{
	char temp;
	for(temp='a';temp<='z';temp++)
	{
		printf("The ASCII value of %c is %d\n",temp,temp);
	}
	return 0;
}
