// 9. Write a Program to Check Whether a Number is Prime or not.
#include<stdio.h>
int main() {

int n , prime = 1;
printf("enter a number : ");
scanf("%d/n" ,&n);

for( int i = 2; i < n; i++) {
    if( n % i ==0) {
        // printf("prime number/n");
        prime = 0;
        break;
    }
}
if(prime == 0 && n!=2) {
printf("%d is not prime number ", n);
}
else{
    printf("%d is a prime number", n);
}
    return 0;
}