//program to find the si using function with parameter with return
#include<stdio.h>
int x(int,int,int);
int main()
{
	int p=0,t=0,r=0,si=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	si=x(p,t,r);
	printf("The si is %d",si);
	return 0;
}
int x(int a,int b,int c)
{
	int z=0;
	z=(a*b*c)/100;
	return z;
}
