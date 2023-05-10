#include<stdio.h>
#include<math.h>
int x();
int main()
{
	int result=0;
	result=x();
	printf("CI=%d",result);
	return 0;
}
int x()
{
	int p=0,t=0,r=0,ci=0;
	printf("Enter the value of p,t and r: ");
	scanf("%d%d%d",&p,&t,&r);
	ci=(p)*pow((1+r/100),t)-(1);
	return ci;
}
