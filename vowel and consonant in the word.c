#include<stdio.h>
int main()
{
	int i=0,v=0,c=0;
	char a[50];
	printf("Enter the word: ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==0)
		{
			break;
		}
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='A'|| a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("The vowel in the word is %d",v);
	printf("\nThe consonant in the word is %d",c);
	return 0;
}
