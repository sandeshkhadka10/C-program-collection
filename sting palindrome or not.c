#include<stdio.h>
int main()
{
	int i=0,j=0,l=0,test=0;
	char x[25],y[25];
	printf("Enter the word: ");
	scanf("%s",x);
	for(i=0;x[i]!='\0';i++)
	{
		l++;
	}
	for(i=l-1;i>=0;i--)
	{
		y[j]=y[i];
		j++;
	}
	for(i=0;i<=l;i++)
	{
		if(x[i]=y[j])
		{
			test=1;
		}
		else
		{
			test=0;
		}
	}
	if(test==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
	return 0;
}
