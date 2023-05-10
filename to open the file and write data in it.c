#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int x;
	p=fopen("D:\\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been created successfully");
	}
	printf("Enter the marks: ");
	scanf("%d",&x);
	fprintf(p,"%d",x);
	fclose(p);
	return 0;
}
