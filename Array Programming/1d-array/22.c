//program to find the number of uppercase and lowercase
#include<stdio.h>
int main()
{
	int i=0,up=0,lw=0;
	char a[50];
	printf("Enter the word: ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			up++;
		}
		else if(a[i]>='a' && a[i]<='z' )
		{
			lw++;
		}
	}
	printf("Lowercase=%d",lw);
	printf("\nUppercase=%d",up);
	return 0;
	
}
