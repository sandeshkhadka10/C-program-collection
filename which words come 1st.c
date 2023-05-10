#include<stdio.h>
int main()
{
	char x[50],y[50];
	int i=0;
	printf("Enter the 1st word: ");
	scanf("%s",x);
	printf("\nEnter the 2nd word: ");
	scanf("%s",y);
	for(i=0;x[i]!='\0' || y[i]!='\0';i++)
	{
		if(x[i]<y[i])
		{
			printf("\n%s comes first than %s",x,y);
			break;
		}
		if(x[i]>y[i])
		{
			printf("\n%s comes first than %s",y,x);
			break;
		}
	}
	return 0;
}
