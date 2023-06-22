//program to add two numbers using pointer
#include <stdio.h>
int main() 
{
    int a = 0, b = 0, c = 0;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    int *x, *y, *z;
    x = &a;
    y = &b;
    c = *x + *y;
    z = &c;
    printf("Sum = %d\n", *z);
    return 0;
}

