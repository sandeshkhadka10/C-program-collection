//program to find ci with parameter no return
#include<stdio.h>
#include<math.h>
void x(int,int,int);
int main()
{
	int p=0,t=0,r=0,ci=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	x(p,t,r);
	return 0;
}
void x(int a,int b,int c)
{
	int result=0;
	result=(a)*pow((1+c/100),b)-(1);
	printf("CI=%d",result);
}
