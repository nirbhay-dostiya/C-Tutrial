// 2.	Write a program to reverse a given integer.
#include<stdio.h>
int main() {
    int num,remainder, reverse =0;
    printf("Enter the number : ");
    scanf("%d" , &num);

//Reverse the given number
    while (num != 0) {
        remainder = num % 10;   // Get the last digit
        reverse = reverse * 10 + remainder;    
        num /= 10;        // Remove the last digit from the original number
    }

// print the revNum as output
    printf("Reversed Number: %d\n", reverse);

    return 0;
}