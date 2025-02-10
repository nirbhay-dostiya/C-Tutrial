/* 2.	Write a program to calculate sum of first 20 natural numbers using recursive function. */

#include<stdio.h>
int sum(int n);  // function prototype
int main() {
    int num; 
    printf("Enter the last term of natural num to print its sum : ");
    scanf("%d", &num);
    int s = sum(num);    // function calling
    printf("sum is %d", s);
    return 0;
}
  // function definition
int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n ;
    return sumN;
}