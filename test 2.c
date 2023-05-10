#include<stdio.h>
int main()
{
	int total=0,w=0,ap=0,sp=0,v=0,c=0,n=0,s=0,i=0;
	char a[100];
	printf("Enter the sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		total++;
		if(a[i]==32)
		{
			sp++;
		}
		else if((a[i]>='A' && a[i]<='z') || (a[i]>='a' && a[i]<='z'))
		{
			ap++;
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
			{
				v++;
			}
			else
			{
				c++;
			}
		}
		if(a[i]>=48 && a[i]<=57)
		{
			n++;
		}
	}
	w=s+1;
	printf("total=%d",total);
	printf("\nwords=%d",w);
	printf("\nAlphabet=%d",ap);
	printf("\nVowel=%d",v);
	printf("\nConsonant=%d",(ap-v));
	printf("\nSpace=%d",sp);
	printf("\nNumber=%d",n);
	printf("\nSpecial Character=%d",(total-ap-sp-n));
	return 0;
}
