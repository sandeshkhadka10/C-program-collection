//program to find the whether the given number is armstrong or not With Parameter With Return function
#include <stdio.h>
#include <math.h>

int armstrong(int);

int main() 
{
    int n = 0, result = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = armstrong(n);
    if (result == 1) 
	{
        printf("It is an Armstrong number.\n");
    } else 
	{
        printf("It is not an Armstrong number.\n");
    }
    return 0;
}

int armstrong(int num) 
{
    int i = 0, rem = 0, sum = 0, original = 0, original1 = 0;
    original = num;
    original1 = num;
    while (original != 0) 
	{
        original = original / 10;
        i++;
    }
    for (i = 1; i <= num; i++) 
	{
        rem = num % 10;
        sum = sum + pow(rem, i);
        num = num / 10;
    }
    if (sum == original1) 
	{
        return 1;
    } 
	else 
	{
        return 0;
    }
}

