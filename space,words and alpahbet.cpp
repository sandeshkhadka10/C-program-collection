#include<stdio.h>
int main()
{
	int i=0,sp=0,w=0,al=0;
	char a[100];
	printf("Enter the sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==32)
		{
			sp++;
		}
		else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			al++;
		}
    }
    w=sp+1;
	printf("\nThe space in the sentence is %d",sp);
	printf("\nThe alphabet in the sentence is %d",al);
	printf("\nThe words in the sentence is %d",w);
	return 0;
	return 0;
}
