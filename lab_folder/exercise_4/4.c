// 4.	Write a program to print number in reverse order with a difference of 2

#include <stdio.h>
int main() {
    int num;
    printf("Enter the starting number: ");
    scanf("%d", &num);
//print in reverser with difference of 2.

    printf("Numbers in reverse order with a difference of 2 are:\n");
    for (int i = num; i >= 0; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}
