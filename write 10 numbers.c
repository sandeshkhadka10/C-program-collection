#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,a[10];
	p=fopen("D:\\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
	}
	else
	{
		printf("File has been created successfully");
	}
	for(i=0;i<=9;i++)
	{
		printf("\nEnter number for a[%d]: ",i);
		scanf("%d",&a[i]);
		fprintf(p,"%d",a[i]);
	}
	fclose(p);
	return 0;
}
