//program to read and print the 10 numbers from the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,a[10];
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
	printf("\nThe numbers are:\n");
	for(i=0;i<=9;i++)
	{
		fscanf(p,"%d",&a[i]);
		printf("\nValue=%d",a[i]);
	}
	fclose(p);
	return 0;
}
