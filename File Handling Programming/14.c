//program to search the employee from the list using file handling function
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
	struct employee e;
	FILE *p;
	int searchID=0,found=0;
	p=fopen("D:\\employee.DAT","rb");
	if(p==NULL)
	{
		printf("File doesnot exist\n");
	}
	else
	{
		printf("File has been opened successfully\n");
	}
	printf("Enter the id you want to search: ");
	scanf("%d",&searchID);
	while(fread(&e,sizeof(struct employee),1,p)==1)
	{
		if(e.id==searchID)
		{
			printf("Name=%s\n",e.name);
			printf("Id=%d\n",e.id);
			printf("Salary=%d\n",e.salary);
			found=1;
			break;
		}
	}
	if(found!=1)
	{
		printf("Your ID is not in the list");
	}
	fclose(p);
	return 0;
}
