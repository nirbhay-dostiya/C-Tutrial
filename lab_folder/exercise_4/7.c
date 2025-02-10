//7.	Write a program to find the factorial of a number.
#include<stdio.h>
int main() {
    int num, fac =1;
    printf("Enter number to print factorial : ");
    scanf("%d", &num);
// print factorial value;

    for(int i=1; i<=num; i++) {
        fac *= i;
    } 
    printf("The value of factorial is : %d", fac);
    return 0;
}