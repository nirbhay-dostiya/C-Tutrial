// 5.	Write a program to print the sum of digits of a number using for loop.

#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter the number : ");
    scanf("%d" ,&num);
//calculate sum of given digits

    for(int i=num; i !=0; i/=10) {
        sum += i % 10;

    }
    printf("The sum of given digits is : %d" ,  sum);
    return 0;
}
