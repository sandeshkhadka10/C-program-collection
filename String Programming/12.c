//program to find the total letter in the word
#include<stdio.h>
int main()
{
    int i=0;
    char a[50];
    printf("Enter the word: ");
    scanf("%s",a);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='\0')
        break;
    }
    printf("The total letter in the word is %d",i);
    return 0;
}

