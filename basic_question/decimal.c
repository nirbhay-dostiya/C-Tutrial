#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n) {
    int binaryNum[32]; // Array to store binary number
    int i = 0; // Counter for binary array

    // Conversion process
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Printing binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decToBinary(n);
    return 0;
}
