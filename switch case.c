#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=0,choice=0,result=0;
	printf("\n\t\tMenu");
	printf("\n\t\t*****");
	printf("\n\t1.Add");
	printf("\n\t2.Subtraction");
	printf("\n\t3.Multiplication");
	printf("\n\t4.Division");
	printf("\n\t5.Exit");
	flag:
	printf("\n\tEnter the choice: ");
	scanf("%d",&choice);
	printf("\n\tEnter the value of a: ");
	scanf("%d",&a);
	printf("\n\tEnter the value of b: ");
	scanf("%d",&b);
	switch(choice)
	{
		case 1:
			result=a+b;
			printf("\tThe addition of the given number is %d",result);
			break;
			
		case 2:
			result=a-b;
			printf("\tThe subtraction of the given number is %d",result);
			break;
			
		case 3:
			result=a*b;
			printf("\tThe multiplication of the given number is %d",result);
			break;
			
		case 4:
			result=a/b;
			printf("\tThe division of the given number is %d",result);
			break;
			
		case 5:
			exit(0);
			break;
			
		default:
			
		printf("\tYou entered the wrong value! Try again");
		goto flag;
		
return 0;
	}
}
