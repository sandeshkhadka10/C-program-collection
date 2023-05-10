#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char r[50];
	int v,c;
	p=fopen("D:\\abc.txt","r+");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	while(fscanf(p,"%c",&r)!=EOF)
	
	{
		if((r>='a' && r<='z') || (r>='A' && r<='Z'))
		{
			if(r=='a' || r=='e' || r=='i' || r=='o'|| r=='u' || r=='A' || r=='E' || r=='I'|| r=='O'|| r=='U' )
			{
				v++;
			}
			else
			{
				c++;
			}
		}
	}
	printf("\n%d",v);
	printf("\n%d",c);
	fclose(p);
	return 0;
	
	
}
