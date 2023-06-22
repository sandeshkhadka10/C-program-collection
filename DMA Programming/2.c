//program to find whether the number is palindrome or not from the sum of the digit and using DMA
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p;
    int i = 0;
    int rem = 0, sum = 0, original = 0, reverse = 0;
    
    p = (int*)malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("Sorry! Memory could not be allocated.");
        exit(0);
    }
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Enter the number for %d: ", i);
        scanf("%d", (p + i));
    }
    
    // Sum of all digits
    for (i = 0; i < 10; i++)
	 {
    	
        original = *(p + i);
        while (original != 0) 
		{
            rem = original % 10;
            sum += rem;
            original = original / 10;
        }
    }
    
    original = sum;
    
    // Palindrome check
    while (original > 0) 
	{
        rem = original % 10;
        reverse = (reverse * 10) + rem;
        original = original / 10;
    }
    
    if (reverse == sum) 
	{
        printf("It is a palindrome.\n");
    } else 
	{
        printf("It is not a palindrome.\n");
    }
    
    free(p);
    
    return 0;
}

