//program to find the employee name that start with D in the structure
#include <stdio.h>
#include <string.h>
struct employee 
{
	char name[50];
	int id;
	int salary;
};
int main() 
{
	struct employee e[5];
	int i = 0;
	printf("Enter the details of the employees:\n");
	for (i = 0;i <=4;i++) 
	{
		printf("Enter the name for employee %d: ", i+1);
		fflush(stdin);
		gets(e[i].name);
		e[i].name[strcspn(e[i].name, "\n")] = '\0';  // Remove trailing newline
		printf("Enter the id: ");
		scanf("%d",&e[i].id);
		printf("Enter the salary: ");
		scanf("%d",&e[i].salary);
		// Consume the newline character after reading the salary
		getchar();
	}
	printf("The details of the employees whose names start with 'D' are:\n");
	for (i = 0;i<=4;i++) 
	{
		if (e[i].name[0] == 'D') 
		{
			printf("\nName: %s\n", e[i].name);
			printf("Id: %d\n", e[i].id);
			printf("Salary: %d\n", e[i].salary);
		}
	}	
return 0;
}

