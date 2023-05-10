#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0;
	char name[50];
	p=fopen("D:\\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
	}
	else
	{
		printf("File has been opened successfully");
	}
	printf("\nEnter the name of 10 students:\n");
	for(i=0;i<=10;i++)
	{
		gets(name);
		fputs(name,p);
		fputs("\n",p);
	}
	fclose(p);
	return 0;
}
