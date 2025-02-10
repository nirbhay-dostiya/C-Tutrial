// 1.	Write a program to count number of digits in a given integer.
#include<stdio.h>
int main() {
    int num , count = 0;
    printf("Enter the number : ");
    scanf("%d" , &num);

//count the digit in given number
     while(num!=0) {
        num /=10;
        count++;
     } 
     printf("The number in digits is : %d" , count);
    return 0;
}