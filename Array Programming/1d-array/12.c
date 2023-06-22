//program to reverse the string
#include <stdio.h>
int main() 
{
    char str[100], rev[100];
    int i = 0, j = 0, l = 0;
    
    printf("Enter the string: ");
    gets(str);
    
    for (i = 0; str[i] != 0; i++) 
	{
        l++;
    }
    
    for (i = l - 1; i >= 0; i--) 
	{
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    
    printf("Reverse of the string is: %s\n", rev);
    
    return 0;
}

