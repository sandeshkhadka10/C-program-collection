//advance menu program
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d=0,n=0,f=0,c=0,si=0,p=0,t=0,r=0,a=0,R=0;
	char choice,x,Y,N;
	printf("\n\t\tMenu");
	printf("\n\t********************");
	printf("\n\ta.Dollar into Nepali");
	printf("\n\tb.Fahrenheit into Celcius");
	printf("\n\tc.Simple Interest");
	printf("\n\td.Area of Circle");
	printf("\n\te.Exit");
	flag:
	fflush(stdin);
	printf("\n\tEnter the choice: ");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
			printf("\n\tEnter the dollar: ");
			scanf("%d",&d);
			n=d*131;
			printf("\n\tThe value of the equivalent dollar into nepali is Rs%d.",n);
			break;
			
		case 'b':
			printf("\n\tEnter the temperature in fahrenheit: ");
			scanf("%d",&f);
			c=(f*32)-(5/9);
			printf("\n\tThe temperature in celcius is %d degree.",c);
			break;
			
		case 'c':
			printf("\n\tEnter the value of p: ");
			scanf("%d",&p);
			printf("\n\tEnter the value of t: ");
			scanf("%d",&t);
			printf("\n\tEnter the value of r: ");
			scanf("%d",&r);
			si=(p*t*r)/(100);
			printf("\n\tThe SI is Rs%d.",si);
			break;
			
		case 'd':
			printf("\n\tEnter the radius of the circle: ");
			scanf("%d",&R);
			a=3.14*R*R;
			printf("\n\tThe area of the circle is %d.",a);
			break;
			
		case 'e':
			printf("\n\tPress Y to exit and N to cancel: ");
			fflush(stdin);
			scanf("%c",&x);
			if(x=='Y')
			{
				exit(0);
			}
			else if(x=='N')
			{
				printf("\n\tRead the option properly");
				goto flag;
			}
			else
			{
				printf("\n\tPlease Press Y or N");
				goto flag;
			}
			break;
			fflush(stdin);
			
		default:
				
		
		printf("\n\tPlease enter between a to e again!");
		goto flag;
		break;
	}
	return 0;
}
