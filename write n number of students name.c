#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,n=0;
	char name[50];
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
	printf("\nHow many number you want to enter: ");
	scanf("%d",&n);
	printf("\nThe %d name are:\n",n);
	for(i=0;i<=n;i++)
	{
		gets(name);
		fputs(name,p);
		fputs("\n",p);
	}
	fclose(p);
	return 0;
}
