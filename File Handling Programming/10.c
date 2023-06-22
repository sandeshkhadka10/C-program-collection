//program to read the whole sentence from the file
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char a[50];

    p = fopen("D:\\abc.txt", "r");
    if(p == NULL)
    {
        printf("File does not exist");
        exit(0); 
    }
    while(fscanf(p, "%s", a)!= EOF)
    {
        printf("%s ", a);
    }

    fclose(p);
    return 0;
}

