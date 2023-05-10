#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
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
	fgets(name,50,p);
	printf("\nName=%s",name);
	fclose(p);
	return 0;
}
