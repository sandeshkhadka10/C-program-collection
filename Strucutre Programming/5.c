//prgraam to enter the details of the 2 student using structure
#include<stdio.h>
struct employee_record
{
	char name[50];
	int id;
	int age;
	float salary;
};
int main()
{
	struct employee_record e[2];
	int i=0;
	printf("Enter the details of the two employee:\n");
	for(i=0;i<=1;i++)
	{
		fflush(stdin);
		printf("Enter the name of %dst employee: ",i+1);
		gets(e[i].name);
		printf("Enter the id: ");
		scanf("%d",&e[i].id);
		printf("Enter the age: ");
		scanf("%d",&e[i].age);
		printf("Enter the salary: ");
		scanf("%f",&e[i].salary);
	}
	printf("The details of the 2 students are:\n");
	for(i=0;i<=1;i++)
	{
		printf("Name=%s\n",e[i].name);
		printf("ID=%d\n",e[i].id);
		printf("Age=%d\n",e[i].age);
		printf("Salary=%.2f\n",e[i].salary);
	}
	return 0;
}
