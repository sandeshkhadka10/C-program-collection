//program to find the space,vowels,consonants,numbers,special symbols using file handling
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char r;
    int i=0,total=0,w=0,al=0,sp=0,v=0,c=0,n=0,s=0;
    p=fopen("D:\\mansan50.txt","r");
    if(p==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    while(fscanf(p,"%c",&r)!=EOF)
    {
		if(r=='.')
		{
			s=1;
			printf("%c",r);
			goto flag;
		}
		printf("%c",r);
	
		if(r==32)
		{
			sp++;
		}
		else if((r>='a' && r<='z') || (r>='A' && r<='Z'))
		{
			al++;
			if(r=='a' || r=='e' || r=='i'|| r=='o'|| r=='u'|| r=='A'|| r=='E'|| r=='I'|| r=='O'|| r=='U')
			{
				v++;
			}
			else
			{
				c++;
			}
		}
		
		else if(r>=48 && r<=57)
		{
			n++;
		}
		else
		{
			s++;
		}
	}
	flag:
	w=sp+1;
	printf("\nSpace = %d",sp);
	printf("\nAlphabet = %d",al);
	printf("\nVowel = %d",v);
	printf("\nConsonant = %d",c);
	printf("\nNumber = %d",n);
	printf("\nSpecial character = %d",s);
	printf("\n Word=%d",w);

    fclose(p);
    return 0;
}
