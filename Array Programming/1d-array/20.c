//program to search word in the sentence
#include<stdio.h>
int main()
{
    int i=0,count=0;
    char x[25],search;
    printf("Enter the sentence: ");
    gets(x);
    getchar(); 
    printf("\nEnter the letter you want to search: ");
    search=getchar();
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==search)
        {
            count++;
        }
    }
    printf("No of occurance of %c is %d",search,count);
    return 0;
}

