//program to read the 10 students name from the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0;
	char name[50];
	p=fopen("D:\\abc.txt","r");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been opened successfully");
	}
	printf("\nThe name of 10 students are:\n");
	for(i=0;i<=9;i++)
	{
		fgets(name,50,p);
		printf("\n%s",name);
	}
	fclose(p);
	return 0;
}
