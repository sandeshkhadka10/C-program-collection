//program to find the 2nd largest number in the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0,i=0,j=0,*p,temp=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Sorry!Memory coludn't be allocated.");
		exit(0);
	}
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter number for %d: ",i);
		scanf("%d",(p+i));
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(*(p+i) < *(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("The second largest number is %d",*(p+1));
	return 0;
}
