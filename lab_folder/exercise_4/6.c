//6.	Write a program to check whether a number is Palindrome or not.
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder, original;
    printf("Enter a numbeer : ");
    scanf("%d", &num);
    original = num;
// Reversed integer is stored in reversed variable
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
// Palindrome if original and reversed are equal. 
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}


