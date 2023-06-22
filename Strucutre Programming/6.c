//program to find the sum of rupees and paisa using strucuture
#include<stdio.h>
struct amount
{
	int rupees;
	int paisa;
};
int main()
{
	struct amount A1,A2,sum;
	printf("Enter the rupees and paisa for A1: ");
	scanf("%d%d",&A1.rupees,&A1.paisa);
	printf("Enter the rupees and paisa for A2: ");
	scanf("%d%d",&A2.rupees,&A2.paisa);
	sum.rupees=A1.rupees+A2.rupees;
	sum.paisa=A1.paisa+A2.paisa;
	if(sum.paisa>=100)
	{
		sum.rupees=sum.rupees+sum.paisa/100;
		sum.paisa=sum.paisa%100;
	}
	printf("The sum=%drupees and %dpaisa",sum.rupees,sum.paisa);
	return 0;
}
