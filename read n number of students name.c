#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,n=0;
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
	printf("\nHow many numbers you want: ");
	scanf("%d",&n);
	printf("\nThe %d students name are: ",n);
	for(i=0;i<=n;i++)
	{
		fgets(name,50,p);
		printf("\n%s",name);
	}
	fclose(p);
	return 0;
}
