#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	char name[50];
	p=fopen("D:\\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been opened successfully");
	}
	printf("\nEnter your name: ");
	gets(name);
	fputs(name,p);
	fclose(p);
	return 0;
}
