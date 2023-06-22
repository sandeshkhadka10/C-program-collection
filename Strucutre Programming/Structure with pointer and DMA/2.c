//program to print the details of the employee in the descending order in the basis of salary using pointer and DMA
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
	struct employee *p,temp;
	int i=0,j=0,n=0;
	printf("Enter how many number of employee you want to add: ");
	scanf("%d",&n);
	p=(struct employee*)calloc(n,sizeof(struct employee));
	if(p==NULL)
	{
		printf("Sorry! Memory couldn't be allocated");
		exit(0);
	}
	printf("Enter the details of the employee:\n");
	for(i=0;i<=n-1;i++)
	{
		fflush(stdin);
		printf("Enter the name for %d employee: ",i+1);
		scanf("%s",(p+i)->name);
		printf("Enter the id: ");
		scanf("%d",&(p+i)->id);
		printf("Enter the age: ");
		scanf("%d",&(p+i)->age);
		printf("Enter the salary: ");
		scanf("%f",&(p+i)->salary);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if((p+i)->salary < (p+j)->salary)
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("The details of the employee in the descending order in the basis of salary:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("\nName=%s\n",(p+i)->name);
		printf("Id=%d\n",(p+i)->id);
		printf("Age=%d\n",(p+i)->age);
		printf("Salary=%.2f",(p+i)->salary);
	}
	return 0;
}
