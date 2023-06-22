//program to print the details of the employees in descending order in the basis of salary
#include<stdio.h>
struct employee
{
	char name[50];
	int id;
	int age;
	float salary;
};
int main()
{
	int i=0,,j=0,n=0;
	float temp=0;
	printf("Enter how many employee you want to add: ");
	scanf("%d",&n);
	struct employee s[n];
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
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(s[i].salary < s[j].salary)
			{
				temp=s[i].salary;
				s[i].salary=s[j].salary;
				s[j].salary=temp;
			}

		}
	}
	printf("The details of the employees in descending order in the basis of salary are:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("\nName=%s\n",s[i].name);
		printf("Id=%d\n",s[i].id);
		printf("Age=%d\n",s[i].age);
		printf("Salary=%.2f",s[i].salary);
	}
	return 0;
}
