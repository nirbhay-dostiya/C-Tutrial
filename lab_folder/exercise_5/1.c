/*  1.Write a program to add, subtract, multiply and divide two 
             integers using user- defined type function with return type.*/

#include <stdio.h>
// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2)); 
    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
    } else {
        printf("Division: Division by zero is not allowed.\n");
    }  
    return 0;
}
// Function definitions
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}
