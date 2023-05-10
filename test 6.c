#include <stdio.h>

void palindrome(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}

void palindrome(int n) {
    int reversed = 0, remainder, original;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome number.", original);
    else
        printf("%d is not a palindrome number.", original);
}

