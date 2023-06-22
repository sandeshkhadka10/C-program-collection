//program to write the data in the file using file handling function
#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[50];
	int id;
	int salary;
};
int main()
{
	FILE *p;
	int i=0,n=0;
	printf("Enter the number of employee you want: ");
	scanf("%d",&n);
	struct employee e[100];
	p=fopen("D:\\employee.DAT","wb");
	if(p==NULL)
	{
		printf("File doesnot exist\n");
	}
	else
	{
		printf("File has been opened successfully\n");
	}
	printf("Enter the details of the employee:\n");
	for(i=0;i<=n-1;i++)
	{
		fflush(stdin);
		printf("Enter the name for %d employee: ",i+1);
		gets(e[i].name);
		printf("Enter the id: ");
		scanf("%d",&e[i].id);
		printf("Enter the salary: ");
		scanf("%d",&e[i].salary);
		fwrite(&e[i],sizeof(struct employee),1,p);
	}
	fclose(p);
	printf("\nThe data has been entered successfully in the file.");
	return 0;
}
