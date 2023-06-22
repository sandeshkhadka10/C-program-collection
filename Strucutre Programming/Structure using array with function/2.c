//program to print the details of the employee in the ascending order on the basis of salary using structure array with function
#include<stdio.h>
struct employee
{
	char name[50];
	int id;
	int age;
	int salary;
};
void d_salary(struct employee[],int);
int main()
{
	int i=0,j=0,n=0;
	printf("Enter the number of employee you want to add: ");
	scanf("%d",&n);
	struct employee s[100];
	printf("Enter the details of the employee:\n");
	for(i=0;i<=n-1;i++)
	{
		fflush(stdin);
		printf("Enter the name for %d employee: ",i+1);
		gets(s[i].name);
		printf("Enter the id: ");
		scanf("%d",&s[i].id);
		printf("Enter the age: ");
		scanf("%d",&s[i].age);
		printf("Enter the salary: ");
		scanf("%d",&s[i].salary);
	}
	d_salary(s,n);
	return 0;
}
void d_salary(struct employee e[],int m)
{
	int i=0,j=0;
	struct employee temp;
	for(i=0;i<=m-1;i++)
	{
		for(j=i+1;j<=m-1;j++)
		{
			if(e[i].salary < e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}	
	}
	printf("The details of the employee in the ascending order on the basis of salary:\n");
	for(i=0;i<=m-1;i++)
	{
		printf("\nName=%s\n",e[i].name);
		printf("Id=%d\n",e[i].id);
		printf("Age=%d\n",e[i].age);
		printf("Salary=%d\n",e[i].salary);
	}
}
