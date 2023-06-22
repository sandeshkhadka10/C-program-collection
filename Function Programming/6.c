//program to find si using function no parameter with return
#include<stdio.h>
int x();
int main()
{
	int result=0;
	result=x();
	printf("SI=%d",result);
	return 0;
}
int x()
{
	int p=0,t=0,r=0,si=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	return si;
}
