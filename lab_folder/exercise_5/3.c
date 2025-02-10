// 3.	Write a program to generate Fibonacci series using recursive function.
#include<stdio.h>
int fib(int n);  // function prototype

int main() {
    int num; 
    printf("Enter Number of term : ");
    scanf("%d", &num);
    fib(num);    // function calling
    printf("Fibonacci Series: "); 
    for(int i = 0; i < num; i++){
         printf("%d ", fib(i)); }
    return 0; 
}

int fib(int n) {           // function definition 
    if(n==1) return 1;
    if(n==0) return 0;
    int fibNm1= fib(n-1);
    int fibNm2= fib(n-2);
    int fibN = fibNm1 + fibNm2;
    //printf("Fibonacci series upto %d term is : %d\n", n, fibN);
    return fibN;
}