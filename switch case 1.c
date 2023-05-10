#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice=0,d=0,n=0,f=0,c=0,si=0,p=0,t=0,r=0,a=0,R=0;
	printf("\n\tMenu");
	printf("\n\t\t*******");
	printf("\n\ta.Dollar into Nepali");
	printf("\n\tb.Fahrenheit into Celcius");
	printf("\n\tc.Simple Interest");
	printf("\n\td.Area of Circle");
	printf("\n\te.Exit");
	printf("Enter the choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 'a':
			printf("Enter the value of p: ");
			scanf("%d",&p);
			printf("Enter the value of t: ");
			scanf("%d",&t);
			printf("Enter the value of r: ");
			scanf("%d",&r);
			si=(p*t*r)/(100);
			printf("The SI is %d",si);
			break;
	}
	return 0;
}
