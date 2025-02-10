// Write a program to find sum of digits of the number using Recursive Function.
#include<stdio.h>
int digitSum(int n); // function prototype 

int main() {
    int num; 
    printf("Enter any inter : ");
    scanf("%d", &num);

    int result = digitSum(num);   // function calling
    printf("Sum of digits of %d is : %d",num,result);
    return 0;
}
// function definition 
int digitSum(int n) {    
    if (n == 0){ 
        return 0; 
        } else{ 
            return (n % 10) + digitSum(n / 10); 
            }
}
