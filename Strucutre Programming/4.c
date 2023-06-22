//program to calculate the distance using structure
#include<stdio.h>
struct distance
{
	int km;
	int m;
};
int main()
{
	struct distance D1,D2,sum;
	int q=0,r=0;
	printf("Enter the km and m for D1: ");
	scanf("%d%d",&D1.km,&D1.m);
	printf("Enter the km and m for D2: ");
	scanf("%d%d",&D2.km,&D2.m);
	sum.km=D1.km+D2.km;
	sum.m=D1.m+D2.m;
	if(sum.m>=1000)
	{
		q=sum.m/1000;
		r=sum.m%1000;
		sum.m=r;
		sum.km=sum.km+q;
	}
	printf("The sum of D1 is %d and D2 is %d",sum.km,sum.m);
	return 0;
}
