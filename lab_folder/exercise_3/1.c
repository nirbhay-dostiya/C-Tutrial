/* 1.Write a program to find the largest and smallest among three entered numbers
 and also display whether the identified largest/smallest number is even or odd */
#include <stdio.h>
int main() {
    int a, b, c;
    int largest, smallest;

// Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

// Find the largest number
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else 
        largest = c;
// Find the smallest number
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else 
        smallest = c;
// Display the results
    printf("Largest number: %d %s\n", largest, largest % 2 == 0 ? "Even" : "Odd");
    printf("Smallest number: %d %s\n", smallest, smallest % 2 == 0 ? "Even" : "Odd");

    return 0;
}
