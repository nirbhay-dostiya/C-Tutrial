// Write a C program to check whether a number is even or odd using functions
#include<stdio.h>
void evenodd(int x);

int main () {
    int a, b;
    printf("Enter any positive integer : ");
    scanf("%d", &a, &b);

    evenodd(a);
    return 0;
}

void evenodd(int x){
    if(x%2==0) printf("%d is even number.",x);
    else printf("%d is odd number.",x);
}
