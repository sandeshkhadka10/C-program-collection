//program to enter the sentence and save in the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	char a[50];
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
	printf("\nEnter the sentence: ");
	gets(a);
	fputs(a,p);
	fclose(p);
	return 0;
	
}
