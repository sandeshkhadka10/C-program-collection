//program to read the marks and name from the file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* p;
    int x;
    char name[50];

    p = fopen("D:\\abc.txt", "r");

    if (p == NULL) {
        printf("File does not exist");
        exit(0);
    } else {
        printf("File has been opened successfully");
    }

    fscanf(p, "%d", &x);
    printf("\nMarks = %d", x);

    fgets(name, 50, p);
    fflush(stdin); // Remove newline character
    printf("%s", name);

    fclose(p);
    return 0;
}

