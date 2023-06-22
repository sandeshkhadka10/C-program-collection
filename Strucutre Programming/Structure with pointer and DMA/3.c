//program to print the details of the employees in ascending order based on name using pointer and DMA
#include<stdio.h>
#include<stdlib.h>
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
	struct employee *p, temp;
	int i = 0, j = 0, n = 0;

	printf("Enter the number of employees you want to add: ");
	scanf("%d", &n);

	p = (struct employee*)calloc(n, sizeof(struct employee));
	if (p == NULL) {
		printf("Sorry! Memory couldn't be allocated.");
		exit(0);
	}

	printf("Enter the details of the employees:\n");
	for (i = 0; i < n; i++) {
		printf("Enter the name for employee %d: ", i + 1);
		scanf("%s", (p + i)->name);
		printf("Enter the id: ");
		scanf("%d", &(p + i)->id);
		printf("Enter the age: ");
		scanf("%d", &(p + i)->age);
		printf("Enter the salary: ");
		scanf("%f", &(p + i)->salary);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (strcmp((p + i)->name, (p + j)->name) > 0) 
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}

	printf("The details of the employees in ascending order based on name:\n");
	for (i = 0; i < n; i++) {
		printf("\nName: %s\n", (p + i)->name);
		printf("Id: %d\n", (p + i)->id);
		printf("Age: %d\n", (p + i)->age);
		printf("Salary: %.2f\n", (p + i)->salary);
	}

	free(p);
	return 0;
}

