#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	p=fopen("D:\Test\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been opened successfully");
	}
	fclose(p);
	return 0;
	
}
