//program to find the greatest and smallest number in the same program
#include<stdio.h>
int main()
{
	int i=0,a[5],gt=0,sm=999;
	for(i=0;i<=4;i++)
	{
		printf("Enter the value for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(gt<a[i])
		{
			gt=a[i];
		}
		else if(sm>a[i])
		{
			sm=a[i];
		}
	}
	printf("\nThe greatest number is %d",gt);
	printf("\nThe smallest number is %d",sm);
	return 0;
}
