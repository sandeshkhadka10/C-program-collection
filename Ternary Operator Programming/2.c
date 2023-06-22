//program to find the greatest number among three numbers using ternary operator.
#include<stdio.h>
int main()
{
	int x=0,y=0,z=0,gt=0;
	printf("Enter the num: ");
	scanf("%d%d%d",&x,&y,&z);
	gt=(x>y)?(x>z?x:z):(y>z?y:z);
	printf("The greatest number among %d,%d and %d is %d",x,y,z,gt);
	return 0;
	
}
