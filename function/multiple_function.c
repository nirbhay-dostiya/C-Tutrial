#include<stdio.h>

int multiply(int a, int b);

int main() {

int a , b;
printf("Enter no a : ");
scanf("%d" , &a);
printf("Enter no b : ");
scanf("%d" , &b);

int m = multiply(a, b);
printf("multiple of a * b is : %d \n" , m); //printf("multiple of a * b is : %d \n" , multiply(a, b));
    return 0;
}
int multiply(int a, int b) {
    return a * b;

}