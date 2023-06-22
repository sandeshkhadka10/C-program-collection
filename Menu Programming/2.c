//program of simple menu
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=0,choice=0,result=0;
	printf("\n\t\tMenu");
	printf("\n\t\t*****");
	printf("\n\t1.Add");
	printf("\n\t2.Subtract");
	printf("\n\t3.Multiplication");
	printf("\n\t4.Division");
	printf("\n\t5.Exit");
	flag:
	printf("\n\tEnter the choice: ");
	scanf("%d",&choice);
	printf("\n\tEnter the value of a and b:");
	scanf("%d%d",&a,&b);
	if(choice==1)
	{
		result=a+b;
		printf("\tThe addition of the number is %d",result);
	}
	else if(choice==2)
	{
		result=a-b;
		printf("\tThe subtraction of the number is %d",result);	
	}
	else if(choice==3)
	{
		result=a*b;
		printf("\tThe multiplication of the number is %d",result);
	}
	else if(choice==4)
	{
		result=a/b;
		printf("\tThe division of the number is %d",result);
	}
	else if(choice==5)
	{
		exit(0);
	}
	else
	{
		printf("\tPlease enter from 1 to 5 only! Try Again");
		goto flag;
	}
return 0;
}
