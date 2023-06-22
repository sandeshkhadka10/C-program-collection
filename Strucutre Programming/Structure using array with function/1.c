//program to print the details of the employee with the highest salary using structure array with function
#include <stdio.h>

struct employee 
{
	char name[50];
	int id;
	int salary;
};

void h_salary(struct employee[], int);

int main() 
{
	int i = 0, n = 0;
	printf("Enter the number of employees you want to add: ");
	scanf("%d", &n);

	struct employee s[100];

	printf("Enter the details of the employees:\n");
	for (i = 0; i < n; i++) 
	{
		fflush(stdin);
		printf("Enter the name for employee %d: ", i + 1);
		gets(s[i].name);
		printf("Enter the ID: ");
		scanf("%d", &s[i].id);
		printf("Enter the salary: ");
		scanf("%d", &s[i].salary);
	}

	h_salary(s, n);

	return 0;
}

void h_salary(struct employee e[], int m) 
{
	int i = 0, gt = 0, highsalary = 0;
	for (i = 0; i < m; i++) 
	{
		if (e[i].salary > gt) 
		{
			gt = e[i].salary;
			highsalary = i;
		}
	}
	printf("The details of the employee with the highest salary are:\n");
	printf("Name: %s\n", e[highsalary].name);
	printf("ID: %d\n", e[highsalary].id);
	printf("Salary: %d\n", e[highsalary].salary);
}

