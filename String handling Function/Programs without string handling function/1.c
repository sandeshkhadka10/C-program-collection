//program to combine two words without using string handling function
#include<stdio.h>
int main()
{
	int i=0,j=0,count=0;
	char x[50],y[50];
	printf("Enter the 1st word: ");
	scanf("%s",x);
	printf("Enter the 2nd word: ");
	scanf("%s",y);
	for(i=0;x[i]!='\0';i++)
	{
		count++;
	}
	x[count]=' ';
	for(i=count+1;y[j]!='\0';i++)
	{
		x[i]=y[j];
		j++;
	}
    puts(x);
	return 0;
}
