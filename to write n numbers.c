#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*p;
	int i=0,a[100],n=0;
	p=fopen("D:\\abc.txt","w");
	if(p==NULL)
	{
		printf("File doesnot exist");
	}
	else
	{
		printf("File has been opened successfully");
	}
	printf("\nHow many numbers you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",&a[i]);
		fprintf(p,"%d",a[i]);
	}
	fclose(p);
	return 0;
}
