//program to find the numbers which are not prime numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n=0,i=0,j=0,count=0;
	printf("Enter the no you want: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Sorry!Memory couldnot be allocated.");
		exit(0);
	}
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter number for %d: ",i);
		scanf("%d",(p+i));
	}
	printf("The numbers which are not prime are:\n");
	for(i=0;i<=n-1;i++)
	{
		count=0;
		for(j=2;j<*(p+i);j++)
		{
			if(*(p+i)%j==0)
			{
				count++;
				break;
			}
		}
		if(count==1 && *(p+i)!=0)
		{
			printf("%d\n",*(p+i));
		}
	}
	return 0;
}
