//program to compare two words without using string handling function
#include<stdio.h>
int main()
{
	char m[50],n[50];
	int i=0,x=0,y=0;
	printf("Enter the 1st word: ");
	scanf("%s",m);
	if(x>='A' && x<='Z')
	{
		x=x+32;
		printf("%s",x);
	}
	printf("Enter the 2nd word: ");
	scanf("%s",n);
	if(y>='A' && y<='Z')
	{
		y=y+32;
		printf("%s",y);
	}
	for(i=0;m[i]!='\0' || n[i]!='\0';i++)
	{
		if(m[i]<n[i])
		{
			printf("%s comes first than %s",m,n);
			break;
		}
		else if(m[i]>n[i])
		{
			printf("%s comes first than %s",n,m);
			break;
		}
		else
		{
			printf("Both strings are same");
			break;
		}
	}
	return 0;
}
