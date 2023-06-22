//program to find the si using si with parameter no return
#include<stdio.h>
void x(int,int,int);
int main()
{
	int p=0,t=0,r=0,si=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	x(p,t,r);
	return 0;
}
void x(int a,int b,int c)
{
	int z=0;
	z=(a*b*c)/100;
	printf("SI=%d",z);
}
