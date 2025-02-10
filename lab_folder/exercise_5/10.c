// Write a C program to find power of any number using recursion
#include <stdio.h>

// Function declaration
int power(int base, int exponent);

int main() {
    int base, exponent, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);
    printf("%d to the power of %d is: %d\n", base, exponent, result);

    return 0;
}

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else {
        return base * power(base, exponent - 1);
    }
}
