#include<stdio.h>
int main()
{
	char x,t;
	printf("Enter the letter: ");
	scanf("%c",&x);
	t=x;
	if(x>='A' && x<='Z')
	{
		x=x+32;
		printf("You have entered uppercase %c",t);
		printf("\nThe lowercase is %c",x);
	} 
	else if(x>='a' && x<='z')
	{
		x=x-32;
		printf("You have entered lowercase %c",t);
		printf("\nThe uppercase is %c",x);
	}
	return 0;
}
