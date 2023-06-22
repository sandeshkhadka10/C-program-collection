//program to convert the word from uppercase to lowercase and viceversa
#include<stdio.h>
#include<string.h>

int main()
{
    char x[50];
    int i = 0,test=0;
    
    printf("Enter the string: ");
    scanf("%s", x);
    
    for(i = 0; x[i] != '\0'; i++)
    {
        if(x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] + 32;
            test=0;
        }
        else if(x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;
            test=1;
        }
    }
    if(test=0)
    {
    	printf("The lowercase is %s",x[i]);
	}
	else
	{
		printf("The uppercase is %s",x[i]);
	}
    
    return 0;
}

