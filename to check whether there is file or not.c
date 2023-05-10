#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	p=fopen("D:\Test\abc.txt","r");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been created successfully");
	}
	fclose(p);
	return 0;
}
