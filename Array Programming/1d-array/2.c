//program to arrange the character in ascending order
#include <stdio.h>
int main() 
{
    int i = 0, j = 0, temp = 0;
    char x[10];
    printf("Enter 10 characters: ");
    for (i = 0; i <= 9; i++) 
	{
        fflush(stdin);
        printf("\nEnter character for %d: ", i + 1);
        scanf("%c", &x[i]);
    }
    for (i = 0; i <= 9; i++) 
	{
        for (j = i + 1; j <= 9; j++) 
		{
            if (x[i] > x[j]) 
			{
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("\nAscending order is:\n");
    for (i = 0; i <= 9; i++) 
	{
        printf("%c\n", x[i]);
    }
    return 0;
}

