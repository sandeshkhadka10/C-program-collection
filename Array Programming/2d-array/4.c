//program to print the names in the ascending order
#include<stdio.h>
#include<string.h>
int main()
{
	char x[10][50],temp=0;
	int i=0,j=0;
	printf("Enter the 10 names:\n");
	for(i=0;i<=9;i++)
	{
		fflush(stdin);
		printf("Enter name for a[%d]: ",i+1);
		fgets(x[i],50,stdin);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;i++)
		{
			if(strcmp(x[j],x[j])>0)
			{
				strcpy(temp,x[i]);
				strcpy(x[i],x[j]);
				strcpy(x[j],temp);
			}
		}
	}
	printf("The 10 names are:\n");
	for(i=0;i<=9;i++)
	{
		printf("%s",x[i]);
	}
	return 0;
}
