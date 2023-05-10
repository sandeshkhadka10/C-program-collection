#include<stdio.h>
#include<math.h>
int x(int,int,int);
int main()
{
	int p=0,t=0,r=0,ci=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	ci=x(p,t,r);
	printf("CI=%d",ci);
	return 0;
}
int x(int a,int b, int c)
{
	int result=0;
	result=(a)*pow((1+c/100),b)-(1);
	return result;
}
