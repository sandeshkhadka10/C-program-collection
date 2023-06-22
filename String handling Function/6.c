//program to find the length of the sentence using string handling function
#include<stdio.h>
#include<string.h>

int main()
{
    int length=0;
    char x[50];
    printf("Enter the sentence: ");
    fgets(x, 50, stdin);
    length = strlen(x);
    printf("The length is %d", length);
    return 0;
}

