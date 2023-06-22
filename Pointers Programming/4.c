//program to find the number of odd and even using DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0,i=0,y=0,o=0,e=0,*p;
	printf("Enter how many number you want to enter: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Sorry! Memory couldnot be allocated.");
		exit(0);
	}
	printf("Enter how manu block you want to add: ");
	scanf("%d",&y);
	p=(int*)realloc(p,(n+y)*sizeof(int));
	printf("Enter the number:\n");
	for(i=0;i<=n+y;i++)
	{
		printf("Enter the number for a[%d]: ",i);
		scanf("%d",p+i);
		if(*(p+i)%2==0)
		{
			o++;
		}
		else
		{
			e++;
		}
	}
	printf("The no of odd is %d",o);
	printf("\nThe no of even is %d",e);
	return 0;
}
