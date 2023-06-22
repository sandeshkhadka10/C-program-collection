//program to find whether the given number is armstrong or not from the sum of the digit and using the DMA
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int *p, i = 0, rem = 0, sum = 0, armstrong = 0, original = 0, original1 = 0;

    p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        printf("Sorry! Memory could not be allocated.");
        exit(0);
    }

    printf("Enter the numbers: ");
    for (i = 0; i < 10; i++)
    {
        printf("Enter number for %d: ", i);
        scanf("%d", (p + i));
    }

    for (i = 0; i < 10; i++)
    {
        original = *(p + i);
        original1 = *(p + i);
        sum = 0;

        while (original != 0)
        {
            rem = original % 10;
            sum += rem;
            original = original / 10;
        }

        armstrong = 0;
        while (original1 != 0)
        {
            rem = original1 % 10;
            armstrong += pow(rem, 3);
            original1 = original1 / 10;
        }

        if (armstrong == sum)
        {
            printf("%d is an Armstrong number.\n", *(p + i));
        }
        else
        {
            printf("%d is not an Armstrong number.\n", *(p + i));
        }
    }

    free(p);
    return 0;
}

