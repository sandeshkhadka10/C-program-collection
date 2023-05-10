#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* p;
    int x;
    char name[50];

    p = fopen("D:\\abc.txt", "w");

    if (p == NULL) 
	{
        printf("File does not exist");
    } else 
	{
        printf("File has been created successfully");
    }

    printf("\nEnter the marks: ");
    scanf("%d", &x);

    printf("\nEnter the name: ");
    fgets(name, 50, stdin);

    fprintf(p, "%d\n", x);
    fputs(name, p);

    fclose(p);
    return 0;
}

