//program to find the greatest number using pointer
#include<stdio.h>
int main()
{
	int i=0,a=0,gt=0;
	int *x,*y;
	x=&a;
	y=&gt;
	printf("Enter the 10 numbers:\n");
	for(i=1;i<=10;i++)
	{
		printf("Enter number for %d: ",i);
		scanf("%d",&a);
		{
		if(*x>*y)
         {
		   *y=*x;
	     } 
	    }	
	}
	printf("The greatest number among 10 numbers is %d",*y);
	return 0;
}
