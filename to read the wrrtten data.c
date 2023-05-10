#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int x;
	p=fopen("D:\\abc.txt","r");
	if(p==NULL)
	{
		printf("File doesnot exist");
		exit(0);
	}
	else
	{
		printf("File has been created successfully");
	}
	fscanf(p,"%d",&x);
	printf("\nValue=%d",x);
	fclose(p);
	return 0;
}
