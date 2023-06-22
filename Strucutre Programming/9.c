//program to find the lowest and highest salary of the employee using structure
#include<stdio.h>
#include<string.h>

struct employee
{
    char name[50];
    int id;
    int salary;
    char department[50];
};

int main()
{
    struct employee s[5];
    int i = 0, highsalary = 0, lowsalary = 0, gt = 0, sm = 999;
    
    printf("Enter the details of the employees:\n");
    
    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        
        printf("Enter the name for employee %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        
        printf("Enter the ID: ");
        scanf("%d", &s[i].id);
        
        printf("Enter the salary: ");
        scanf("%d", &s[i].salary);
        
        fflush(stdin);
        
        printf("Enter the department: ");
        fgets(s[i].department, sizeof(s[i].department), stdin);
        
        printf("\n");
    }
    
    for (i = 0; i < 5; i++)
    {
        if (s[i].salary > gt)
        {
            gt = s[i].salary;
            highsalary = i;
        }
        if (s[i].salary < sm)
        {
            sm = s[i].salary;
            lowsalary = i;
        }
    }
    
    printf("The employee with the highest salary is:\n");
    printf("Name: %s", s[highsalary].name);
    printf("ID: %d\n", s[highsalary].id);
    printf("Salary: %d\n", s[highsalary].salary);
    printf("Department: %s\n", s[highsalary].department);
    printf("\n");
    
    printf("The employee with the lowest salary is:\n");
    printf("Name: %s", s[lowsalary].name);
    printf("ID: %d\n", s[lowsalary].id);
    printf("Salary: %d\n", s[lowsalary].salary);
    printf("Department: %s\n", s[lowsalary].department);
    printf("\n");
    
    printf("The employees working in the computer department are:\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(s[i].department, "Computer\n") == 0)
        {
            printf("Name: %s", s[i].name);
            printf("ID: %d\n", s[i].id);
            printf("Salary: %d\n", s[i].salary);
            printf("Department: %s\n", s[i].department);
        }
    }
    
    return 0;
}

