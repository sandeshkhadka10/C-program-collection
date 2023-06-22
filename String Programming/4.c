//program to print the ASCII value of A to Z
#include<stdio.h>
int main()
{
	char temp;
	for(temp='A';temp<='Z';temp++)
	{
		printf("The ASCII value of %c is %d\n",temp,temp);
	}
	return 0;
}
