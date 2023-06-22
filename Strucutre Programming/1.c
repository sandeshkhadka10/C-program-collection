//program using the file to create the list of employee with greatest salary.
#include<stdio.h>
struct employee_high
{
	char name[50];
	int id;
	float salary;
};
int main()
{
	struct employee_high s[3];
	int i=0,gt=0,highsalary=0;
	printf("Enter the details of the employee: ");
	for(i=0;i<=2;i++)
	{
		printf("Enter the name of %d employee: ",i+1);
		gets(s[i].name);
		printf("Enter the id: ");
		scanf("%d",&s[i].id);
		printf("Enter the salary: ");
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<=2;i++)
	{
		if(s[i].salary>gt)
		{
			gt=s[i].salary;
			highsalary=i;	
		}
	}
	printf("The details of the employee with highest salary is: ");
	for(i=0;i<=2;i++)
	{
		printf("Salary=%.2f\n",s[highsalary].salary);
		printf("Name=%s\n",s[highsalary].name);
		printf("Id=%d",s[highsalary].id);
	}
	return 0;
}
