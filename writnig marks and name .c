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
        exit(0);
    } else 
	{
        printf("File has been created successfully");
    }

    printf("\nEnter the marks: ");
    scanf("%d", &x);
    
    fflush(stdin);

    printf("\nEnter the name: ");
    gets(name);

    fprintf(p, "%d\n", x);
    
    fputs(name, p);

    fclose(p);
    return 0;
}

