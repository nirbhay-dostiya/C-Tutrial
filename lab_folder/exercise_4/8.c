//8.	Write a program to check number is Armstrong or not.
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
// Calculate the number of digits in the input
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
// Compute the sum of the power of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
 // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
