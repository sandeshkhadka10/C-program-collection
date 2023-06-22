//program to display the salary of the highest salary from the file using file handling function
#include <stdio.h>
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
    struct employee e, highestsalary;
    int gt = 0;

    // Open the file
    p = fopen("D:\\employee.DAT", "rb");
    if (p == NULL) 
	{
        printf("File doesnot exist.\n");
    }
    else
    {
    	printf("File has been opened successfully.\n");
	}

    // Read records and find the employee with the highest salary
    while (fread(&e, sizeof(struct employee), 1, p) == 1) 
	{
        if (e.salary > gt) 
		{
            gt = e.salary;
            highestsalary = e;
        }
    }
printf("Employee with the highest salary:\n");
    printf("Name: %s\n", highestsalary.name);
    printf("ID: %d\n", highestsalary.id);
    printf("Salary: %d\n", highestsalary.salary);

    // Close the file
    fclose(p);

    // Display the record of the employee with the highest salary
   /*printf("Employee with the highest salary:\n");
    printf("Name: %s\n", highestsalary.name);
    printf("ID: %d\n", highestsalary.id);
    printf("Salary: %d\n", highestsalary.salary);*/

    return 0;
}

