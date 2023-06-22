//program to print the details of the employee in ascending order on the basis of the name
#include<stdio.h>
#include<string.h>
struct employee
{
	char name[50];
	int id;
	int age;
	float salary;
};
int main()
{
	int i=0,j=0,n=0;
	printf("Enter how many employee you want: ");
	scanf("%d",&n);
	struct employee s[n],temp;
	printf("Enter the details of the employee:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the name for %d employee: ",i+1);
		gets(s[i].name);
		printf("Enter the id: ");
		scanf("%d",&s[i].id);
		printf("Enter the age: ");
		scanf("%d",&s[i].age);
		printf("Enter the salary: ");
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				memcpy(&temp,&s[i],sizeof(employee));
				memcpy(&s[i],&s[j],sizeof(employee));
				memcpy(&s[j],&temp,sizeof(employee));
			}
		}
	}
	printf("The details of the employee in ascending order on the basis of the name:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Name=%s",s[i].name);
		printf("Id=%d",s[i].id);
		printf("Age=%d",s[i].age);
		printf("Salary=%.2f",s[i].salary);
	}
	return 0;
}
