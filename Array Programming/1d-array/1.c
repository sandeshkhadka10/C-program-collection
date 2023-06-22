//program to add two arrays.
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter the value for  a[%d]: ",i);
		scanf("%d",&a[i]);
		
		printf("Enter the value for  b[%d]: ",i);
		scanf("%d",&b[i]);
		
		c[i]=a[i]+b[i];
	}
	for(i=0;i<=4;i++)
	{
		printf("The addition of c[%d] is %d\n",i,c[i]);
	}
	return 0;
}
