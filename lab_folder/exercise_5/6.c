// 6.	Write a program to read an integer number and 
//print the reverse of that number using recursion
#include<stdio.h>
void reverse(int a, int *result);

int main () {
    int n; 
    printf("Enter an integer : ");
    scanf("%d", &n);
    int reversed = 0;
    reverse(n,&reversed);
    printf("Reverse of %d is : %d", n, reversed);
    return 0;
}

void reverse(int a, int *result){
    if(a==0){
        return;
    }
    else{
        int remainder = a % 10; 
        *result = *result * 10 + remainder; 
        reverse(a / 10, result);
    }
}