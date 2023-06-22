//program to convert the lowercase into uppercase without using string handling function
#include<stdio.h>
int main()
{
	char x[50];
	int i=0;
	printf("Enter the string: ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]>='a' && x[i]<='z')
	  { 
		x[i]=x[i]-32;
      }
	}	
printf("The given string in the uppercase is %s",x);	
return 0;
}

