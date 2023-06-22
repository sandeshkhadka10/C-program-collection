//program to arrange the numbers in ascending order using pointer
#include<stdio.h>
int main()
{
	int i=0,j=0,a[10],temp=0;
	int *p;
	p=a;
	printf("Enter 10 numbers:\n");
	for(i=0;i<=9;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(*(p+i)> *(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("The number in ascending order are:\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",*(p+i));
	}
return 0;
}
