// Write a C program to check whether a number is prime, Armstrong or perfect number using functions
#include <stdio.h>
#include <math.h>

// Function declarations
int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check if the number is a perfect number
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int originalNum, remainder, result = 0;
    int numDigits = 0;
    originalNum = n;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }
    originalNum = n;

    // Calculate the sum of the powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, numDigits);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n) {
        return 1;
    } else {
        return 0;
    }
}

// Function to check if a number is a perfect number
int isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n && n != 1) {
        return 1;
    } else {
        return 0;
    }
}


