//Write a c program to print reverse of fibonacci number.
#include<stdio.h>
void printfibreverse(int arr[] , int n);
int reverse(int arr[], int n);


int main () {
    int n;
    printf("Enter number n, n>=2 : ");
    scanf("%d" , &n);
    int fib[n];
    fib[0] = 0;
    fib[1] =1;
    printf("The n term of fibonacci is : ");
    printf("%d \t%d \t" ,fib[0] ,fib[1]);
 for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2]; // this is general formula for fibonacci of n
        printf("%d \t" , fib[i]);
    }
    printf("\n");
    reverse(fib, n);
    printf("The reverse of n term fibonacci is :");
    printfibreverse(fib, n);
    return 0;
}

void printfibreverse(int arr[] , int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t" ,arr[i]);
    }
    printf("\n");


}

int reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}