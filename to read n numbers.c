#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,n=0,a[100];
	p=fopen("D:\\abc.txt","r");
	if(p==NULL)
	{
		printf("File doesnot exist");
	}
	else
	{
		printf("File has been opened successfully");
	}
	printf("\nHow many numbers you want to display: ");
	scanf("%d",&n);
	printf("\nThe %d numbers are: ",n);
	for(i=0;i<=n;i++)
	{
		fscanf(p,"%d",&a[i]);
		printf("\nValue=%d",a[i]);
	}
	fclose(p);
	return 0;
}
