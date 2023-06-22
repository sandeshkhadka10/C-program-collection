//program to print the employee detail with the highest salary using pointer and DMA
#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[50];
	int id;
	int age;
	float salary;
};
int main()
{
	int *p;
	int i=0,n=0,highsalary=0;
	float gt=0;
	printf("Enter how many number you want to enter:\n");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Sorry!Memory couldn't be allocated.");
		exit(0);
	}
	struct employee s[n];
	printf("Enter the details of the employees:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the name for %d employee: ");
		gets((p+i)->name);
		printf("Enter the id: ");
		scanf("%d",(p+i)->id);
		printf("Enter the age:  ");
		scanf("%d",&(p+i)->age);
		printf("Enter the salary: ");
		scanf("%f",&(p+i)->salary);
	}
	for(i=0;i<=n-1;i++)
	{
		if((p+i)>gt)
		{
			gt = (p+i)->salary;
			highsalary=i;
		}
	}
	printf("The employee detail with the highest salary: ");
	printf("Name=%s\n",p[highsalary].name);
	printf("Id=%d\n",p[highsalary].id);
	printf("Age=%d",p[highsalary].age);
	printf("Salary=%.2f",p[highsalary].salary);
	return 0;
}
