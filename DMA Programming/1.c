//program to arrange the numbers in ascending order using DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0,i=0,j=0,*p,temp=0,y=0;
	printf("Enter how many number you want to enter: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
			printf("Sorry! Memory couldnot be allocated");
			exit(0);	
	}
	printf("Enter how many blocks you want to add: ");
	scanf("%d",&y);
	p=(int*)realloc(p,(n+y)*sizeof(int));
	printf("Enter the numbers:\n");
	for(i=0;i<=n+y;i++)
	{
		printf("Enter number for a[%d]: ",i);
		scanf("%d",p+i);
	}
	for(i=0;i<=n+y;i++)
	{
		for(j=i+1;j<=n+y;j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	printf("The number in ascending order are:\n");
	{
		for(i=0;i<=n+y;i++)
		{
			printf("%d\n",*(p+i));
		}
	}
return 0;
}
