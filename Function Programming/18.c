//program to find the position of the number in the array by passing array with function
#include<stdio.h>
void w(int[],int);
int main()
{
	int a[100],n=0,i=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter num for a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	w(a,n);
	return 0;
}
void w(int x[],int y)
{
	int test=0,j=0,num=0;
	printf("Enter the number which position you want to find: ");
	scanf("%d",&num);
	for(j=0;j<=y-1;j++)
	{
		if(x[j]==y)
		{
			test=1;
			printf("%d is the num and %d is its position",y,j+1);
		}
	}
	if(test==0)
	{
		printf("Data is not found");
	}
}
